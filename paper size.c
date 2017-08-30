#include<stdio.h>
void main()
{
  float a=1189,b=841;
  int i;
  printf("A0  %5f  %5f\n",a,b);;
  for(i=1;i<=8;i++)
  {
      if(a>b)
      {
          a=a/2;
      }
      else
      {
          b=b/2;
      }
      printf("A%d  %5f mm  %5f mm\n",i,a,b);
  }

}
