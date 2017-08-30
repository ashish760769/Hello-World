#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    puts("Enter first string");
    gets(str1);
    puts("Enter second string");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("Entered strings are equal");
    else
        printf("Entered strings are not equal");
}
