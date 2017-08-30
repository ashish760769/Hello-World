#include<stdio.h>
int main()
{
    void *p;
    int a = 10,*i;
    float b = 52.36952,*f;
    char c = 'g',*ch;
    p = &a;
    //i = p;
    printf("%d\n",*((int *)p)); //Here is type casting of void into int pointer
    p = &b;
    //f = p;
    printf("%f\n",*((float *)p));
    p = &c;
    //ch = p;
    printf("%c\n",*((char *)p));

}
/*We can store address of any type of variable in a void pointer
so we can use a void pointer multiple times in a program */
