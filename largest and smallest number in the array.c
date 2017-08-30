//CREATED BY ASHISH SHUKLA AT 06/06//2016,11:15AM
#include<stdio.h>
void main()
{
    int a[100],i,j,n,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }

    }
    printf("The smallest and largest number is %d and %d",a[1],a[n]);


}
