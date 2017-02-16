#include<stdio.h>
void main()
{
    int r,s,a;
    printf("Enter ages of all\n");
    scanf("%d %d %d",&r,&s,&a);
    if(r<s)
    {
      if(a<r)
        printf("Ajay is youngest\n");
      else
        printf("Rajan is youngest\n");
    }
    else
        {
           if(s<a)
            printf("shyam is youngest\n");
           else
            printf("Ajay is youngest\n");
        }
}
