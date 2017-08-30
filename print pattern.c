#include<stdio.h>
void main()
{
    int i,n,j,tn=0;
    printf("enter the number of lines");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        tn=tn+i;
        for(j=0;j<i;j++)
        {
           printf("*");
        }
        printf("\n");
    }
    printf("The %dth trangular number is %d",n,tn);
}
