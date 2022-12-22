#include <stdio.h>

void order(double * x, double * y, double * z);

int main(void)
{
    double a = 1.9, b = 3.7, c = 0.4;
    printf("a = %g, b = %g, c = %g\n", a, b, c);
    order(&a, &b, &c);
    printf("a = %g, b = %g, c = %g\n", a, b, c);

    return 0;
}

void order(double * x, double * y, double * z)
{
    double temp;

    if (*x > *y)
    {
        temp = *y;
        *y = *x;
        *x = temp;
    }
    if (*y > *z)
    {
        temp = *z;
        *z = *y;
        *y = temp;
    }
    if (*x > *y)
    {
        temp = *y;
        *y = *x;
        *x = temp;
    }
}