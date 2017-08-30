#include<stdio.h>
#include<math.h>
void main()
{
    float a;
    float v;
    printf("Enter angle");
    scanf("%f",&a);
    v=pow(sin(a),2)+ pow(cos(a),2);
    printf("%f",v);

}
