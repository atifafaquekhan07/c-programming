#include<stdio.h>
int main()
{int n;
printf("enter value of n");
scanf("%d",&n);
// 100 50 25 12.5 6.25 3.125 1.5625 0.78125 0.390625 0.1953125........//
float a=100;
for(int i=1;i<=n;i++)
{
    printf("%f ",a);
    a=a/2;
}
return 0;}