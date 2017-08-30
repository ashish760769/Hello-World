#include<stdio.h>
void main()
{
    int a,b,i,j,count1=0,count;
    printf("Enter the numbers between which you want to find prime numbers");
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        count=0;

        for(j=1;j<=i;j++)
        {
         if(i%j==0)
        {
          count=count+1;
        }
        }
          if(count==2)
        {
         count1++;
         printf("\n%d",i);
        }
    }
 printf("\n%d",count1);
}

