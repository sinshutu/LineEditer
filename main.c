#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char LineEdite[256];
	printf("%s\n", argv[1]);

	fp = fopen(argv[1], "a");
	if(fp==NULL){//ファイルが開けなければ強制終了
		printf("file can't open\n");
		return -1;
	}


	printf(">");
	scanf("%s", &LineEdite);
	// printf("%s\n", fgets(fp));
	fputs(LineEdite, fp);
	fclose(fp);
	
	return 0;
}