#include<stdio.h>
#include<string.h>
int stringlength(char s[]);
void main()
{
  int length,l;
  char name[100];
  puts("Enter the string:");
  gets(name);
  length=strlen(name);
  l = stringlength(name);
  printf("the length of string is %d\n",length);
  printf("the length of string is %d\n",l);
}
int stringlength(char s[])
{
    int i = 0,le = 0;
    while(s[i] != '\0')
    {
        le++;
        i++;
    }
    return le;
}
