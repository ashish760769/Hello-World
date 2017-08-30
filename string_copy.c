//Here we use two functions strcpy and strncpy
#include<stdio.h>
#include<string.h>
int main()
{
    char dest_string_1[10];
    char dest_string_2[10];
    char source_string[] = "welcome";
    strcpy(dest_string_1, source_string);
    strncpy(dest_string_2, source_string, 2);
    printf("%s\n",dest_string_1);
    printf("%s\n",dest_string_2);
}
