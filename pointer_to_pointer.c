//this program illustrate use of double pointer
#include<stdio.h>
int main()
{
    int a=52,*p1,**p2;
    p1 = &a;
    p2 = &p1;
    printf("%d, %d, %d\n",a,*p1,**p2);
    *p1 = 64;
    printf("%d, %d, %d\n",a,*p1,**p2);
    **p2 = 35;
    printf("%d, %d, %d\n",a,*p1,**p2);
    return 0;
}
