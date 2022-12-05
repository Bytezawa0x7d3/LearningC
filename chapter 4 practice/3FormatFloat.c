#include <stdio.h>

void main(void)
{
    float value;

    printf("Please enter a floating-point number: ");
    scanf("%f", &value);
    printf("The input is %.1f or %.1e.\n", value, value);
    printf("The input is %+.3f or %.3E.", value, value);
}