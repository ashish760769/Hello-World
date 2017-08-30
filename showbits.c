#include<stdio.h>
void showbits(unsigned char);
void main()
{
   unsigned char num,k;
   for(num=0;num<=100;num++)
   {
       printf("Decimal %d is same as binary  ",num);
       showbits(num);

       k=~num;
       printf("ones compliment of %d is  ",num);
       showbits(k);
       printf("\n");
   }
}
void showbits(unsigned char n)
{
   int d,r,i=0,b[10];
   d=n;
   while(d>0,i<10)
    {
        r=d%2;
        b[i]=r;
        d=d/2;
        i=i+1;
    }
    for(i=10;i>=0;i--)
    {
        printf("%d",b[i]);
    }
    printf("\n");

}

