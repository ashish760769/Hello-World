#include<stdio.h>
int pow(int);
void showbits(unsigned char);
void main()
{
    int arr[10],n,a,b,c,i;
    for(i=1;i<=10;i++)
  {
    printf("Enter your preferences\n");
    scanf("%d %d %d",&a,&b,&c);

    n=pow(a)+pow(b)+pow(c);
    arr[i]=n;
    showbits(n);
    printf("%d\n",n);
  }

}
int pow(int x)
{
    int i,m=1;
    for(i=1;i<=x;i++)
    {
        m=m*2;
    }
    return m;
}
void showbits(unsigned char n)
{
    int i;
    unsigned char j,k,andmask;
    for(i=8;i>=0;i--)
    {
        j=i;
        andmask=1<<j;
        k=n & andmask;
        k==0? printf("0"):printf("1");

    }
    printf("\n");
}
