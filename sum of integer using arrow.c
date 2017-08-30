#include<stdio.h>
void main()
{
    int a[1000],i,sum=0,n;
    printf("enter the number of integers you want to add\n");
    scanf("%d",&n);
    printf("enter the integers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the sum of numbers is %d",sum);
}
