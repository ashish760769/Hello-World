#include <stdio.h>
#define MULTI 5
int main()
{
    int num_max=10,temp=1;
    printf("Enter maximum number: ");
    scanf("%d",&num_max);
    while(temp < num_max)
    {
        printf("%d\n",temp);
        temp *= MULTI;
    }
    return 0;
}
