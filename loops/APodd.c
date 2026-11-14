#include<stdio.h>
int main()
{
    int n;// itni baar loop chalegi
    printf("enter valueof n: ");
    scanf("%d",&n);
    // for(int i=1;i<=2*n-1;i=i+2)//a;nth;d
    // 4 7 10 13 16 19 ......... upto n terms
    for(int i=4;i<=3*n+1;i=i+3)//a;nth;d
    printf("%d ",i);
    return 0;
}