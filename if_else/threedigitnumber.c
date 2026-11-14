#include <stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n > 99 && n < 10000)
    {
        printf("it is a thee digit number");
    }
    else
    {
        printf("it is not a three digit number");
    }

    return 0;
}