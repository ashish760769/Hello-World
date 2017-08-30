#include<stdio.h>
void showbits(unsigned char);
void main()
{
    unsigned char num,j,k;
    printf("Enter the number for shift");
    scanf("%d",&num);
    printf("decimal %d in binary is ",num);
      showbits(num);
      for(j=1;j<5;j++)
      {
        k=num<<j;
        printf("%d left shift %d gives ",j,num);
        showbits(k);
      }

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
