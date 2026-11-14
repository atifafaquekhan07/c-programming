#include<stdio.h>
int main()
{ int a;
    printf("enter first number");
    scanf("%d",&a);
    int b; // a>b
    printf("enter second number");
    scanf("%d",&b); 
    int r = a%b; // if a<b then a % b = a
    printf("the remainder is :%d",r);
    return 0;

}