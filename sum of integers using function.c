#include<stdio.h>
int sum(int,int);
void main()
{
    int a,b,s;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("the sum is %d",s);

}
int sum(int d,int e)
{
    int c;
    c=d+e;
    return c;
}

