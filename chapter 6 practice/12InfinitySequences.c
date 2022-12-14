#include <stdio.h>

int main(void)
{
    int terms_1, terms_2, x, sign;
    double sum;

    printf("Enter two numbers as number of terms of two sequences (q to quit): ");
    while (scanf("%d%d", &terms_1, &terms_2) == 2)
    {
        for (x = 1, sum = 0.0; x <= terms_1; x++)
            sum += 1.0 / x;
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 ... (%d terms totally) = %lf\n",
                terms_1, sum);
        for (x = 1, sum = 0.0, sign = 1; x <= terms_2; x++, sign *= -1)
            sum += (1.0 / x) * sign;
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 ... (%d terms totally) = %lf\n",
                terms_2, sum);
        printf("Enter the next pair of numbers as number of terms (q to quit): ");
    }

    return 0;
}