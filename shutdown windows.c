#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("Do you want to shut down windows");
    scanf("%c",&ch);
    if(ch==y || ch==Y)
        system("C:\Windows\System32\shutdown.exe");
    return 0;
}
