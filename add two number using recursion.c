//CREATED BY ASHISH SHUKKLA AT 06-06-2016,23:42
#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
  int a,b,sum;
  printf("Enter the two numbers\n");
  scanf("%d %d",&a,&b);
  sum=add(a,b);
  printf("The sum of two numbers is %d\n",sum);
}
int add(int m,int n)
{
    int y;
    if(n==0)
        return m;
    y=add(m,n-1)+1;//use of recursion
    return y;
}
