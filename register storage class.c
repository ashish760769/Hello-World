#include<stdio.h>
#include<conio.h>
void main()
{
   register int i;//value stored in register accessed faster
   char ch;
   for(i=0;i<=10;i++)
   {
       printf("%d\n",i);
   }
}
