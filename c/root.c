#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, x1, x2, d;
    printf("Enter the coeffients for a,b,c\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a * b * c == 0)
    {
        printf("\nRoots cant be find\n");
        exit(0);
    }
    d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("\nThe roots are real and equal\n");
        printf("x1=%f\n x2=%f\n", x1, x2);
    }
    else if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("\nThe roots are real and distinct\n");
        printf(" x1=%f\n x2=%f\n", x1, x2);
    }
    else
    {
        x1 = -b / (2 * a);
        x2 = (sqrt(fabs(d))) / (2 * a);
        printf("\nThe roots are real and imaginary\n");
        printf("(x1+ix2)= %f+i%f\n", x1, x2);
        printf("(x1-ix2)=%f-i%f\n", x1, x2);
    }
    return 0;
}