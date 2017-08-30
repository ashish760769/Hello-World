#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("pr2.txt","r");
    if(fp==NULL)
    {
        puts("can not open the file");
        exit(1);
    }
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
}
