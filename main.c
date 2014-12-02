#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char str[256];

	fp = fopen("./pack/test.dat","w");

	if(fp==NULL){
		printf("%s\n" );
		printf("disable\n");
		return -1;
	}
	fclose(fp);

	return 0;
}