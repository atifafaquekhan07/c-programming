#include<stdio.h>
int main()
{
    float p,r,t,si; // 4 container create ho jaate hai 
    printf("enter principal:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter time:");
    scanf("%f",&t);
   si= (p*r*t)/100;
    printf("your si is:%f",si);
    return 0;
}