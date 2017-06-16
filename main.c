#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int insert(char *input){
    putchar('>');
    fgets(input, sizeof input, stdin);
    return 0;
}

int save(char *input, char *fname){
    FILE *fp = fopen(fname, "a");
    if(fp==NULL){// ファイルが指定されているかどうか
        puts("ファイルが指定されていません");
        return -1;
    }
    fputs(input, fp);
    fclose(fp);
    return 0;
}

int quit(){
    puts("closed.");
    exit(0);
}

int help(){
    puts("help pages\nno data");
    return 0;
}

int main(int argc, char const *argv[])
{
    char *fname = (char *)argv[1];
    char *input = (char *)malloc(1000);
    char *command = (char *)malloc(1000);
    while(1){
        fgets(command, sizeof input, stdin);
        if(!strcmp(command, "q\n"))        quit();
        else if(!strcmp(command, "w\n"))   save(input, fname);
        else if(!strcmp(command, "i\n"))   insert(input);
        else if(!strcmp(command, "h\n"))   help();
        else if(!strcmp(command, ".\n"))   ;
        else                               puts("?");
    }
    return 0;
}
