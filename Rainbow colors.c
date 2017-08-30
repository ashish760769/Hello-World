#include<stdio.h>
# define _VB(x) (1<<x)
void showbits(unsigned char);
void main()
{
    unsigned char color,j;
    int i=4;
    printf("Enter a number between 0 to 127\n");
    scanf("%d",&color);
    showbits(color);
    printf("%d represents colors\n",color);

      j= color & _VB(i);

      if(j==1)
      {
        if(i==6)
        {
          printf("Red\n");
        }
        if(i==5)
        {
            printf("Orange\n");
        }
        if(i==4)
        {
          printf("Yellow\n");
        }
        if(i==3)
        {
          printf("Green\n");
        }
        if(i==2)
        {
            printf("Blue\n");
        }
        if(i==1)
        {
            printf("Indigo\n");
        }
        if(i==0)
        {
            printf("Violet\n");
        }
      }
      else
      {
          printf("\n");
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
