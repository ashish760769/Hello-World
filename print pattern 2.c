#include <stdio.h>
void main()
{
int n,i,j,temp;
printf("enter the number of rows");
scanf("%d",&n);
for(i=0;i<n;i++)
   {
    for(j=0;j<temp;j++)
      {
        printf(" ");

      }
      temp=temp-1;

    for(j=0;j<2*n-1;j++)
      {
        printf("*");
      }
    printf("\n");
   }
}
