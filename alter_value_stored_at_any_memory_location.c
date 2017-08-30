#include<stdio.h>
#define MAX 3
int main()
{
    int *p[MAX],i;
    int a=10,b=20,c=30;
    p[0] = &a; //you can assign any other address
    p[1] = &b;
    p[2] = &c;
    for(i=0;i<MAX;i++)
    {
        printf("%p-->%u\n",p[i],*p[i]);
        *p[i]=(i+5);
        printf("%p-->%u\n",p[i],*p[i]);
    }
    return 0;
}
