#include<stdio.h>
void main()
{
    int a,b,c,x,ans;
    printf("Enter the value of a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    printf("Enter the value of variable x");
    scanf("%d",&x);
    ans=((a(x*x))+(b*x)+c);
    printf("The value of exp is %d",ans);
}
