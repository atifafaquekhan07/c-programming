#include <stdio.h>
int main()
{
    int n; // itni baar loop chalegi
    printf("enter valueof n: ");
    scanf("%d", &n);
    // 100 97 94 91 88 85 82 79 76 73........//
    int a = 100;
    for (int i = 1; a>0; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }

    return 0;
}