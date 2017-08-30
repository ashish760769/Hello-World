#include<stdio.h>
void main()
{
    int a[1000],n,sum=0,i;
    printf("enter no. of numbers");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the sum is %d",sum);
}
