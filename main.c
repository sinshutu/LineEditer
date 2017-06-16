#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char *str;
    str = (char *)malloc(1000);
    fp = fopen(argv[1], "a");
    if(fp==NULL){// ファイルが開けなければ強制終了
        puts("file can't open\n");
        return -1;
    }

    putchar('>');
    fgets(str, sizeof str, stdin);
    fputs(str, fp);
    fclose(fp);

    return 0;
}
