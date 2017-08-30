#include<stdio.h>
void main()
{
    int n,d;
    printf("enter the number ");
    scanf("%d",&n);
    printf("the reverse of this number is ");
    while(n>0)
    {
       d=n%10;
       printf("%d",d);
       n=n/10;
    }
}
