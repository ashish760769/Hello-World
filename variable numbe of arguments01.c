#include<stdio.h>
#include<stdarg.h>
void display(int,int,...);
void main()
{
    display(1,5,85,63,24,91,24);
    display(2,3,'a','b','z');
    display(3,4,52.639,41.236,785.21,784.283);
}
void display(int type,int nov,...)
{
    int count,i;
    char ch;
    float f;
    va_list ptr;
    va_start(ptr,nov);
    switch(type)
    {
    case 1:

        for(count=1;count<=nov;count++)
            {
                i=va_arg(ptr,int);
                printf("%d ",i);
            }

        break;
    case 2:

            for(count=1;count<=nov;count++)
            {
                ch=va_arg(ptr,char);
                printf("%c ",ch);
            }

        break;
    case 3:

            for(count=1;count<=nov;count++)
            {
                f=(float)va_arg(ptr,double);
                printf("%f",f);
            }

    }
}
