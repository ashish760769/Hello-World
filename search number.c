#include<stdio.h>
void main()
{
    int a[100],i,n,s;
    printf("enter the number of integers\n");
    scanf("%d",&n);
    printf("enter the %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to search\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("the %d is found at %d place\n",s,i+1);
        }
        else
            printf("the %d is not found\n",s);
    }

}
