#include<stdio.h>
void main()
{
    float a1,a2,a3;
    printf("Enter all angles of triangle\n");
    scanf("%f %f %f",&a1,&a2,&a3);
    if(a1+a2+a3==180)
        printf("It is a valid triangle\a");
    else
        printf("this tringle is not possible\a");
}
