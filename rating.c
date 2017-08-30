#include<stdio.h>
void main()
{
    int a[10000],i,j,men,count;
    printf("enter the number of people for survey");
    scanf("%d",&men);
    for(i=0;i<men;i++)
    {
        printf("enter your rating between 1 to 10\n");
        scanf("%d",&a[i]);
    }
    for(j=1;j<=10;j++)
    {
        count=0;
      for(i=0;i<men;i++)
      {
          if(a[i]==j)
          {
           count=count+1;
          }
      }
    printf("the %d rating is given by %d people\n",j,count);
    }
}
