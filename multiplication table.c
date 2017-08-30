#include<stdio.h>
void main()
{
    int i,n,m;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The table of %d is\n",n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%d*%d=%d\n",n,i,m);
    }
    getche();

}
