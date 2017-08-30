#include<stdio.h>
void caltn(int);
void main()
{
  int a,b,c;
  printf("Enter three numbers\n");
  scanf("%d %d %d",&a,&b,&c);
  caltn(a);
  caltn(b);
  caltn(c);
}
void caltn(int n)
{
    int i,tn=0;
   for(i=1;i<=n;i++)
   {
     tn=tn+i;
   }
   printf("The %dth triangular number is %d\n",n,tn);

}
