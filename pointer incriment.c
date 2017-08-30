#include<stdio.h>
void main()
{
    int arr[5]={12,41,85,56,23},i,*p;
    p=&arr[0];
    for(i=0;i<5;i++)
    {

        printf("address is %u\tvalue is %d\n",p,*p);
        p++;
    }
    printf("%d",(arr+3);


}
