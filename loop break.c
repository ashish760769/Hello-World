#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int a,b;
    srand(time(NULL));
    while(1)
    {
        a=rand()%20;
        printf("%d\n",a);
        if(a==10)
            break;
        b=rand()%20;
        printf("%d\n",b);
    }
}
