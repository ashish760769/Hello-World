#include<stdio.h>
#define MAX 6
void main()
{
    int people[MAX],i,j,c[5];
    for(j=1;j<=5;j++)
    {
        c[j]=0;
    }
    for(i=1;i<=MAX;i++)
    {
      printf("Enter rating between 1 to 5 given by people %d\n",i);
      scanf("%d",&people[i]);
    }


        for(j=1;j<=5;j++)
        {
            for(i=1;i<=MAX;i++)


            {
              if(people[i]==j)
                 {
                   c[j]=c[j]+1;
                 }
            }
        }

    printf("Ratings               Number of people\n");
    printf("--------             -------------------\n");
    for(j=1;j<=5;j++)
    {
        printf("%5d %25d\n",j,c[j]);
    }
}

