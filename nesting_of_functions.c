//Nesting of function is calling of one function inside another function
#include<stdio.h>
#define NUMBER_1 45
#define NUMBER_2 59
void display(void);
int greater(int x, int y);
int main()
{
    display();
}
void display(void)
{
    int a = NUMBER_1, b = NUMBER_2,greater_number;
    printf("Numbers are %d and %d\n",a,b);
    greater_number = greater(a,b); //This is nesting of greater function with display function
    printf("Greater number is %d\n",greater_number);
}
int greater(int x,int y)
{
    if (x > y)
        return x;
    else
        return y;
}
