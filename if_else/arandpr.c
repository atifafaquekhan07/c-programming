#include <stdio.h>
int main()
{
    int l; // dabba
    printf("enter length:");
    scanf("%d", &l);
    int b; // dabba
    printf("enter breadth");
    scanf("%d", &b);
    int a = l * b, p = 2 * (l + b);
    if (a > p)
    {
        printf("area is greater than it's perimeter");
    }
    if (p > a)
    {
        printf("perimeter is greater than it's area");
    }

    return 0;
}