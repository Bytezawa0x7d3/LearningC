#include <stdio.h>

void larger_of(double * x, double * y);

int main(void)
{
    double x = 3.14159;
    double y = 2.71828;

    printf("Originally x = %lf and y = %lf.\n", x, y);
    larger_of(&x, &y);
    printf("Now x = %lf and y = %lf.\n", x, y);

    return 0;
}

void larger_of(double * x, double * y)
{
    *x = (*x > *y) ? *x : *y;
    *y = *x;
}