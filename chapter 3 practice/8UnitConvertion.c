#include <stdio.h>

void main(void)
{
    float pint;
    float c;
    float ounce;
    float ladle;
    float teaspoon;

    printf("Please enter the volume of something in c.: ");
    scanf("%f", &c);

    pint = c * 0.5;
    ounce = c * 8;
    ladle = c * 8 * 2;
    teaspoon = c * 8 * 2 * 3;

    printf("pint: %f\nc: %f\nounce: %f\nladle: %f\nteaspoon: %f",
    pint, c, ounce, ladle, teaspoon);
}