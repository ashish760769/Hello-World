//dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*ptr,sum=0;
    printf("Enter number of integers  ");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int)*n);
    if(ptr==NULL)
        printf("memory not allocated for this much number of integers\n");
    else
    {
        printf("Enter the integers\n");
        for(i=0;i<n;i++)
        {
          scanf("%d",ptr);

          sum=sum+*ptr;
          ptr++;
        }
    }
    if(sum != 0)
        printf("Sum is %d",sum);
    free(ptr);
}
