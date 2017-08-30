#include<stdio.h>
void main()
{
    char *names[]={"ashish","anurag","vijay","gopal","rajesh","raman"};
    char *temp;
    printf("Original: %s  %s\n",names[2],names[4]);
    temp=names[2];
    names[2]=names[4];
    names[4]=temp;
    printf("New: %s  %s",names[2],names[4]);
}
