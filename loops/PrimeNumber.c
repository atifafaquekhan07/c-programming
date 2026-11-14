#include <stdio.h>
int main()
{
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
         if (n % i == 0) // i is a factor of n
        {
            // printf("our number is composite");
            a=1;

            break;
        }

       
    }
    if(n==1)
    {
        printf("our number is neither prime nor composite");
    }
    else
    if(a==0)
    {
        printf("our number is prime");
    }
    else
    {
        printf("our number is composite");
    }
    return 0;
}
