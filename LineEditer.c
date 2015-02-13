#include <stdio.h>

#define WIDTH 80;//コマンドプロンプトの横幅

int main(int argc, char const *argv[])
{
	FILE *fp;
	char LineEdite[256];//1行バッファ
	int tmp[100];
	printf("filePath: %s\n>", argv[1]);//d 読み込んだファイルパスの表示

	fp = fopen(argv[1], "r+");
	if(fp==NULL){//ファイルが開けなければ強制終了
		printf("file can't open\n");
		return -1;
	}
	// *stdin = *fp;

	fgets(LineEdite, sizeof(LineEdite), stdin);
	/*fgets(文字配列,sizeof(文字配列),stdin(ファイルポインタ)); 
		＊stdinはキーボードのファイルポインタ
	*/
	//fp = fopen(argv[1], "w");
	fputs(LineEdite, fp);//fputs(文字配列,ファイルポインタ);
	fclose(fp);
	
	return 0;
}
