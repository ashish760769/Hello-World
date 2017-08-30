#include<stdio.h>
void main()
{
    int n,r,sum=0;
    printf("Enter a integer");
    scanf("%d",&n);
    r=n%10;
    sum=sum+r;
    n=n/10;
    while(n>0)
    {
      n=n/10;
      if(n<10)
      {
          r=n%10;
          sum=sum+r;
      }
    }
    printf("sum of first and last digits is %d",sum);
}
