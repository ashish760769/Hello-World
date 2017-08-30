#include<stdio.h>
void main()
{
    int num,sum=0,count=0,n;
    printf("enter the integer of which you want to find sum of digits");
    scanf("%d",&num);
    while(num!=0)
    {
    n=num%10;
    num=num/10;
    sum=sum+n;
    count=count+1;
    }
    printf("%d %d",sum,count);
}
