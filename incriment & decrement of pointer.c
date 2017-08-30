//this tells us about increment and decrement of pointer
//increment and decrement of pointer depends upon data type of that pointers
#include<stdio.h>
int main()
{
    int n = 5;
    float f = 2.562348;
    char c = 'k';
    printf("%d %f %c\n",n,f,c);
    printf("%d %d %d\n",&n,&f,&c);
    printf("%d %d %d\n",&n+1,&f+1,&c+1);
    printf("%d %d %f\n",*(&n+1),*(&f+1),*(&c+1));

}
