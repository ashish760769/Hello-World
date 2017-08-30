#include<stdio.h>
int fact(int);
void main()
{
  int n,i;
  float r,f,sum=0;
  printf("Enter the integer till which you want to find sum\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      f=fact(i);
      r=i/f;
      sum=sum+r;
  }
  printf("The sum of series is %f",sum);

}
int fact(int num)
{
    int ans=1,j;
    for(j=1;j<=num;j++)
    {
     ans=ans*j;
    }
    return ans;
}
