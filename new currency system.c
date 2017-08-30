#include<stdio.h>
void main()
{
    int sum,n,total;
    printf("Enter the total amount\n");
    scanf("%d",&sum);
    int n100=sum/100;
    sum=sum%100;
    int n50=sum/50;
    sum=sum%50;
    int n10=sum/10;
    sum=sum%10;
    int n5=sum/5;
    sum=sum%5;
    int n2=sum/2;
    sum=sum%2;
    int n1=sum/1;
    sum=sum%1;
    total=n100+n50+n10+n5+n2+n1;
    printf("The total minimum number of notes is %d",total);

}
