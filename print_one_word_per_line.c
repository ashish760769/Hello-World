#include<stdio.h>
#define IN 1
#define OUT 0
void main()
{
    int c,state=IN;
    while((c = getchar()) != EOF)
    {
        if((c == ' ') || (c == '\n') || (c == '\t'))
        {
           state = OUT;
        }
        else if(state == IN)
        {
            putchar(c);
        }
        else if(state == OUT)
        {
            putchar(c);
            state = IN;
        }
    }
}
