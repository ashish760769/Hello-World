/*program to calculate inverse of two matrix*/
#include<stdio.h>
void main( )
{
    int a[3][3],adj[3][3],c[3][3],i,j;
    float inv[3][3],p,mod;
    printf("enter element of 1st matrix in order a11,a12,a13,a21,a22......\n");
     for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
                scanf("%d",&a[i][j]);
        }
     c[0][0]=((a[1][1]*a[2][2])-(a[2][1]*a[1][2]));
     c[0][1]=(-(a[1][0]*a[2][2])+(a[2][0]*a[1][2]));
     c[0][2]=((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));

     c[1][0]=(-(a[0][1]*a[2][2])+(a[2][1]*a[0][2]));
     c[1][1]=((a[0][0]*a[2][2])-(a[2][0]*a[0][2]));
     c[1][2]=(-(a[0][0]*a[2][1])+(a[2][0]*a[0][1]));

     c[2][0]=((a[0][1]*a[1][2])-(a[1][1]*a[0][2]));
     c[2][1]=(-(a[0][0]*a[1][2])+(a[1][0]*a[0][2]));
     c[2][2]=((a[0][0]*a[1][1])-(a[1][0]*a[0][1]));

    mod=((a[0][0]*c[0][0])+(a[0][1]*c[0][1])+(a[0][2]*c[0][2]));
    p=1/mod;
    printf("the modulus of matrix is %f\n",mod);
    if(mod!=0)
    {
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           adj[i][j]=c[j][i];
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            inv[i][j]=((p)*adj[i][j]);
        }
    }
    printf("the inverse of matrix in the same order is \n");
    for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
           {
               printf("%f\n",inv[i][j]);
           }
        }
    }
    if(mod==0)
    {
        printf(" hence this is singular matrix, inverse not possible");
    }


}
