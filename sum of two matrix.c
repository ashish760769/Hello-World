/*program to calculate sum of two matrix*/
#include<stdio.h>
void main( )
{
    int a[3][3],b[3][3],p[3][3],i,j;
    printf("enter element of 1st matrix in order a11,a12,a13,a21......\n");
    {
        for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
                scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of 2nd matrix in same order\n");
    {
        for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
                scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
           p[i][j]=(a[i][j]+b[i][j]);
        }
    printf("the sum of two matrix is\n");
        for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
            printf("%d\n",p[i][j]);
        }
  }

