#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char str[256];
	printf("%s\n", argv[1]);

	fp = fopen(argv[1], "w");
	fputs(argv[1], fp);
	if(fp==NULL){//ファイルが開けなければ強制終了
		printf("file can't open\n");
		return -1;
	}
	
	// printf("%s\n", fgets(fp));

	fclose(fp);
	
	return 0;
}