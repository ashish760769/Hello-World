#include<stdio.h>
void main()
{
    char arr1[100],n,i;
    printf("Enter the number of characters in the string\n");
    scanf("%d",&n);
    printf("Enter the string\n");
    for(i=0;i<=n;i++)
        scanf("%c",&arr1[i]);
    printf("The reverse of the string is \n");
    for(i=n;i>=0;i--)
        printf("%c",arr1[i]);

}
