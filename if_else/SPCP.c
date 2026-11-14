#include <stdio.h>
int main()
{
    int cp; // dabba
    printf("enter cost price:");
    scanf("%d", &cp);
    int sp; // dabba
    printf("enter selling price:");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("profit");
    }
    else if(cp > sp)
    {
        printf("loss");
    }
    // else{printf("loss");}
    else

    {
        printf("no profit, no loss");
    }

    return 0;
}