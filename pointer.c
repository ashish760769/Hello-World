#include<stdio.h>
void main()
{
    int count=0;
    int *pv;
    pv=&count;
    printf("%d\n",*pv);
    printf("%d",count);
}
