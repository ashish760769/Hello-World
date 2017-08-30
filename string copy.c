#include<stdio.h>
#include<string.h>
void main()
{
    char str1[]="Hello",str2[100],str3[1000];
    strcpy(str2,str1);
    strcpy(str3,"How are you man");
    printf("str1:%s\nstr2:%s\nstr3:%s",str1,str2,str3);

}
