#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The reverse array is\n");
    for(i=n;i>=1;i--)
    {
        printf("%d\n",a[i]);
    }
}
