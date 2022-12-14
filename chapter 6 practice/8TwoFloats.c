#include <stdio.h>

int main(void)
{
    double x, y;

    printf("Enter two floating-point numbers (q to quit): ");
    while (scanf("%lf%lf", &x, &y) == 2)
    {
        printf("(%g - %g) / (%g * %g) = %g\n",
                x, y, x, y, (x - y) / (x * y));
        printf("Enter the next pair of numbers (q to quit): ");
    }

    return 0;
}