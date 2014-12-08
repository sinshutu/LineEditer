#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char str[256];
	char tmp[] = "test"; 
	fp = fopen("./pack/test.dat","w");

	if(fp==NULL){
		printf("%s\n" );
		printf("disable\n");
		return -1;
	}
	str = "LineEditer.exe,LineEditer.exe,LineEditer.exe"
	
	fclose(fp);

	return 0;
}