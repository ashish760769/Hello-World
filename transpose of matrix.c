//transpose of matrix at 06-06-2016,10:16am
//created by Ashish shukla
#include<stdio.h>
void main()
{
    int mat[10][10],trans[10][10],i,j,m,n;
    printf("Enter the number of rows and column of matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix\n");
    for(i=1;i<=m;i++)
    {
     for(j=1;j<=n;j++)

        {
          scanf("%3d",&mat[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
           {
            trans[i][j]=mat[j][i];
           }
    }
    printf("The transpose of matrix is \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
           {
               printf("%3d",trans[i][j]);
           }
           printf("\n");
    }


}
