#include<stdio.h>
#include<string.h>
#define NOC 6  //NOC is for number of character
int main()
{
    int n = NOC;
    char source_str[] = "Ashish Shukla";
    char destination_str[] = "My name is ";
    strncat(destination_str, source_str, n);
    printf("%s\n",destination_str);   //or printf("%s",strncat(destination_str, source_str, n));

}
