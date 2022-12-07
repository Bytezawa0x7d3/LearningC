#include <stdio.h>
#define I_PER_C 0.3937008
#define I_PER_F 12

void main(void)
{
    double cm;
    double inch;

    printf("Enter a height in centimeters (<=0 to quit): ");
    scanf("%lf", &cm);
    while (cm > 0.0)
    {
        inch = cm * I_PER_C;
        printf("%.1lf cm = %d feet, %.1lf inchs.\n",
               cm, (int)inch / I_PER_F, inch - ((int)inch / I_PER_F * I_PER_F));
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%lf", &cm);
    }
    printf("Bye.");
}