#include <stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3;
    printf(" enter x1: ");
    scanf("%lf", &x1);
    printf(" enter y1: ");
    scanf("%lf", &y1);
    printf(" enter x2: ");
    scanf("%lf", &x2);
    printf(" enter y2: ");
    scanf("%lf", &y2);
    printf(" enter x3: ");
    scanf("%lf", &x3);
    printf(" enter y3: ");
    scanf("%lf", &y3);
    double slopeAB = (y2 - y1) / (x2 - x1);
    double slopeBC = (y3 - y2) / (x3 - x2);
    if (slopeAB == slopeBC)
    {
        printf("points are collinear");
    }
    else
    {
        printf("poinst are not collinear");
    }
}