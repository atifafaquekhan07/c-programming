#include <stdio.h>
int main()
{
    int a, b, c,d;
    printf("enter first number A:");
    scanf("%d", &a);
    printf("enter second number B : ");
    scanf("%d", &b);
    printf("enter third number C : ");
    scanf("%d", &c);
    printf("enter fourth number D :");
    scanf("%d", &d);

    if (a > b && a > c && a>d)
    {
        printf("%d is greatest",a);
    }
    if (b > a && b > c && b>d)
    {
        printf("%d is greatest",b);
    }
    if (c > a && c > b && c>d)
    {
        printf("%d is greatest",c);

    }
if (d>a && d>b && d>c)
    {
        printf("%d is greatest",d);
    }
    return 0;
}
