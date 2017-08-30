//program is created by Ashish shukla at 06-06-2016,18:05
#include<stdio.h>
void main()
{
    int a,b,*x,*y,sum;
    printf("Enter two numbers\n");
    x=&a;
    y=&b;
    scanf("%d %d",x,y);
    sum=*x+*y;
    printf("The sum of these two number is %d",sum);
}
