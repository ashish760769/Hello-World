#include<stdio.h>
void main()
{
    int number,firstdigit,lastdigit;
    printf("Enter the number\n");
    scanf("%d",&number);
    lastdigit=number%10;
    firstdigit=number;
    while(firstdigit>=10)
        firstdigit=firstdigit/10;
    printf("The sum of first and last digit is %d",firstdigit+lastdigit);
}
