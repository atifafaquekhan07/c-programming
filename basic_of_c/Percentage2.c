#include<stdio.h>
int main()
{
    float m1 = 32; // maths marks 
    float m2 = 30; // physics marks
    float m3 = 34; // chem marks 
    float m4 = 28; // english marks 
    float m5 = 28; // computer marks
    float p = ((m1 + m2 + m3 + m4 + m5))/2;
    printf("Percentage of 5 subjects:%f", p);

    return 0;
}