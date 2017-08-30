#include<stdio.h>
#define MAX 5
void sum_and_display(int a[],int m);
void main()
{
    int arr[MAX],i;
    printf("Enter five integers:\n");
    for(i=0;i<MAX;i++)
        scanf("%d",&arr[i]);
    sum_and_display(arr,MAX);
    getch();
}
void sum_and_display(int a[],int m)
{
    int j,sum=0;
    printf("The array elements are:\n");
    for(j=0;j<m;j++)
    {
        printf("%d\n",a[j]);
        sum=sum+a[j];
    }
    printf("The sum of elements is: %d",sum);
    return;
}
