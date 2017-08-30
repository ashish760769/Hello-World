#include<stdio.h>
#include<stdarg.h>
int findmax(int,...);
void main()
{
    int max;
    max=findmax(5,23,4,56,95,41);
    printf("Maximum value is %d\n",max);

    max=findmax(4,14,85,36,105);
    printf("Maximum value is %d\n",max);
}
int findmax(int totnum,...)
{
    int count,num,max;
    va_list ptr;
    va_start(ptr,totnum);
    max=va_arg(ptr,int);
    for(count=1;count<totnum;count++)
    {
        num=va_arg(ptr,int);
        if(num>max)
            max=num;
    }
    return  max;
}
