#include<stdio.h>
int sumofdgt(int);
void main()
{
    int num,sum;
    printf("enter the number\n");
    scanf("%d",&num);
    sum=sumofdgt(num);
    printf("the sum of digits of %d is %d",num,sum);
}
int sumofdgt(int n)
{
    int s=0,i;
    while(n>0)
    {
     i=n%10;
     s=s+i;
     n=n/10;
    }
    return s;
}
