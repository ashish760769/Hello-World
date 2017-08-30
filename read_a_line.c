//this reads one line of input and stores them into char array
#include<stdio.h>
#define MAX_CHAR 30
void main()
{
    int c,i;
    char s[MAX_CHAR];
    for(i=0;((i<MAX_CHAR) && (c=getchar() != '\n') && (c != EOF)); i++){
        s[i] = c;
        }
    printf("%s",s);

}
