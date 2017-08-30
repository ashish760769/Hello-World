#include<stdio.h>
void showbits(unsigned char);
void main()
{
    unsigned char n,rsn;
    int i;
    printf("Enter the number ");
    scanf("%c",&n);
    printf("%c in binary is             ",n);
    showbits(n);
    rsn=n>>i;

    printf("%d right shift of %c in Binary is ",i,n);
    showbits(rsn);
    printf("%d right shift of %c in Decimal is %d\n",i,n,rsn);

}
void showbits(unsigned char n)
{
    int i;
    unsigned char j,k,andmask;
    for(i=7;i>=0;i--)
    {
        j=i;
        andmask=1<<j;
        k=n & andmask;
        k==0? printf("0"):printf("1");

    }
    printf("\n");
}

