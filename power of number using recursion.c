#include<stdio.h>
int powr(int,int);
void main()
{
    int b,n,y;
    printf("Enter the base and power in integers\n");
    scanf("%d %d",&b,&n);
    y=powr(b,n);
    printf("The %dth power of %d is   %d\n",n,b,y);
}
int powr(int m,int n)
{
    int p;
    if(n==1)
        return m;
    p=(powr(m,n-1))*m;
    return p;
}
