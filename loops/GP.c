#include <stdio.h>
int main()
{
    int n; // itni baar loop chalegi
    printf("enter valueof n: ");
    scanf("%d", &n);
    // 1 2 4 8 16 32 64 128 256 512 1024......
    // int a=1;
    // for(int i=1;i<=n;i=i+1)
    // {
    //     printf("%d ",a);
    //     a=a*2;
    // }

    // 3 12 48 192 768 3072 12288 49152 196608 786432........//
    int a = 3;
    for (int i = 1; i <= n; i = i + 1)
    {
        printf("%d ", a);
    
        a = a * 4;
    }
    return 0;
}