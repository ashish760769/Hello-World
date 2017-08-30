//this program print the numbers from zero till n-1
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%5d%c",i,((i==(n-1)) || ((i%10)==9))?'\n':' ');
    }
}
