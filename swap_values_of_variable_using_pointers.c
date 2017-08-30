#include<stdio.h>
void swap(int *x,int *y);
int main()
{
   int a=10,b=20;
   printf("Values before swap is a=%d and b=%d\n",a,b);
   swap(&a,&b);
   printf("Values after swap is a=%d and b=%d",a,b);
   return 0;
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x = *y;
    *y = temp;
}
