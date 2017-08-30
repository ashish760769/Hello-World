#include<stdio.h>
void main()
{
    int a,b,x,y;
    printf("Enter two integers\n");
    scanf("%d %d",&a,&b);
    a++;
    b--;
    x=a;y=b;
    printf("The value of x and y is %d and %d\n",x,y);
}
