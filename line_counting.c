#include<stdio.h>
void main()
{
    int c,nol=0;     //nol- number of lines
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            nol++;
        }
    }
    printf("%d\n",nol); //this prints number of lines
    printf("%d",'\n'); //integer value of '\n'
}
