#include <stdio.h>

void temperatures(double f);

void main(void)
{
    int returned;
    double f;

    printf("Enter a number as fahrenheit degree (q to quit): ");
    returned = scanf("%lf", &f);
    while (returned == 1)
    {
        temperatures(f);
        printf("Enter a number as fahrenheit degree (q to quit): ");
        returned = scanf("%lf", &f);
    }

}

void temperatures(double f)
{
    const float SCALE_F = 5.0 / 9.0;
    const float ADJUST_F = -32.0;
    const float ADJUST_K = 273.16;

    printf("Fahrenheit degree: %f\n", f);
    printf("Celsius degree: %f\n", SCALE_F * (f + ADJUST_F));
    printf("Kelvin degree: %f\n", SCALE_F * (f + ADJUST_F) + ADJUST_K);
}