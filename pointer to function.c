#include<stdio.h>
void display();
void main()
{
  printf("Address of display function is %d\n",display);
  display();//this is simple way of calling function
}
void display()
{
    printf("long live viruses\n");
}
