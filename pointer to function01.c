#include<stdio.h>
#include<conio.h>
int add(int x, int y);
int main()
{
   int a,b,sum;
   int (*func_ptr)(int a, int b);
   printf("Enter Two numbers:\n");
   scanf("%d %d",&a,&b);
   func_ptr=&add;
   sum = (*func_ptr)(a, b);
   printf("Sum of These numbers is %d\n",sum);
   getche();
   return 0;

}
int add(int x,int y)
{
    return (x+y);
}
