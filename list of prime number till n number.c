//created by ashish shukla at 08-06-2016
#include<stdio.h>
void main()
{
    int i,n,j,c1,c2=0,rem;
    printf("Enter the number till you want\nto find all prime numbers\n");
    scanf("%d",&n);
    printf("list of all prime number till %d is\n",n);
    for(j=2;j<=n;j++)
    {
        c1=0;
        for(i=1;i<=j;i++)
        {
            rem=j%i;
            if(rem==0)
            {
               c1=c1+1;
            }
        }
        if(c1==2)
        {
            c2=c2+1;
            printf("%7d\n",j);
        }

    }
    printf("Total %d prime numbers exist till %d\n",c2,n);

}
