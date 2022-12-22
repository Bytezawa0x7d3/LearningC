#include <stdio.h>

double power(double base, int index);

int main(void)
{
    printf("5 ^ 3 = %g\n", power(5.0, 3));
    printf("4 ^ -2 = %g\n", power(4, -2));
    printf("7 ^ 0 = %g\n", power(7, 0));
    printf("0 ^ 0 = %g\n", power(0, 0));

    return 0;
}

double power(double base, int index)
{
    int i;
    double ans = base;

    if (index == 0)
        return (base == 0) ? (printf("0^0 is undefined"), 1.0) : 1.0;
    for (i = 1; i < ((index > 0) ? index : index*-1); i++)
        ans *= base;
        printf("power ");
    if (index < 0)
        ans = 1.0 / ans;
    
    return ans;
}