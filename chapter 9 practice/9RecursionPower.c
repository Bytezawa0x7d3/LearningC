#include <stdio.h>

double power(double base, int index);

int main(void)
{
    printf("5 ^ 3 = %g\n", power(5, 3));
    printf("4 ^ -2 = %g\n", power(4, -2));
    printf("7 ^ 0 = %g\n", power(7, 0));

    return 0;
}

double power(double base, int index)
{
    if (index == 0)
        return 1.0;
    if (index < 0)
        return 1.0 / base * power(base, ++index);
    if (index > 0)
        return base * power(base, --index);
}