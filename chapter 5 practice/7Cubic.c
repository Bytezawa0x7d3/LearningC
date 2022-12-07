#include <stdio.h>

void cubic(double num);

void main(void)
{
    double num;
    printf("Enter a floating-point number: ");
    scanf("%lf", &num);
    cubic(num);
}

void cubic(double num)
{
    printf("%f^3 = %f", num, num * num * num);
}