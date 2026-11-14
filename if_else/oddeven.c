#include <stdio.h>
int main()
{
    int n; // dabba ban gya
    printf("enter a number :");
    scanf("%d", &n); // dabbe mai value daal di , n=7
    if (n % 2 == 0)
    { // even
        printf("even number");
    }
    else
    {
        printf("odd number");
    }

    // if (n%2!=0){// odd
    // printf("odd number");
    // }

    return 0;
}