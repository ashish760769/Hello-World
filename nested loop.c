#include<stdio.h>
void main()
{
    int i,j,k;
    printf("Output of nested loop is\n");
    for(i=0;i<5;i++);
    {
        for(j=0;j<6;j++)
        {
            k=i+j;
            printf("   %d",k);
        }
    }
}
