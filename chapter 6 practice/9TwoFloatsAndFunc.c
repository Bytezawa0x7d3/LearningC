#include <stdio.h>

double calc(double x, double y);

int main(void)
{
    double x, y;

    printf("Enter two floating-point numbers (q to quit): ");
    while (scanf("%lf%lf", &x, &y) == 2)
    {
        printf("(%g - %g) / (%g * %g) = %g\n",
                x, y, x, y, calc(x, y));
        printf("Enter the next pair of numbers (q to quit): ");
    }

    return 0;
}

double calc(double x, double y)
{
    return (x - y) / (x * y);
}