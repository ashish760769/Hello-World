#include<stdio.h>
void main()
{
    int c,nocial=0;
    char str[10];
    int i = 0;
    while((c = getchar()) != EOF)
    {
        nocial+=1;
        str[i] = c;
    }
    if(nocial >= 10)
    {
        printf("%s",str);
    }
}
