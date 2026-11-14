#include<stdio.h>
int main()
{float x;
    printf("enter decimal number");
    scanf("%f",&x);
    int y=x;
    printf("integer part is: %d\n",y);
    float z=x-y;
    printf("fractional part is:%f",z);
    return 0;
}