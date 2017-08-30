#include<stdio.h>
#define MAX 20
void main()
{
    int c,i;
    char s[MAX];

    for(i=0;i<MAX;i++)
    {
        c = getchar();
        if(c != '\n')
        {
            if(c != EOF)
                s[i] = c;
        }
        else
            break;
    }
    printf("%s",s);
}
