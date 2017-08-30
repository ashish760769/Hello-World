//This pro illustrate use of strrev function
#include<stdio.h>
#include<string.h>
int main()
{
    char text[10];
    int retval;
    scanf("%s",text);//we scan the string entered by user
    retval = strrev(text); //Checking the return value of strrev function
    printf(text);
    printf("\n");
    printf("%s\n",retval); //Return value of strrev is same as value in text
    getch();
}
/*Here we can conclude that strrev function reverse the string
in place meant original value is changed in the same variable*/

