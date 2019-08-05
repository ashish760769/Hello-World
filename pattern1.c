/*This program prints the below pattern in n lines
where n is user input
*
**
***
****
*****
******

Above pattern is for n == 6 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
    getchar();
    
}