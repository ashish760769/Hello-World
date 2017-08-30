#include<stdio.h>
void main()
{
    char names[][10]={"ashish","anurag","vijay","gopal","rajesh","raman"},t;
    int i;
    printf("Original:%s  %s\n",&names[2][0],&names[3][0]);
    for(i=0;i<10;i++)
    {
        t=names[2][i];
        names[2][i]=names[3][i];
        names[3][i]=t;
    }
    printf("New:%s  %s",&names[2][0],&names[3][0]);

}
