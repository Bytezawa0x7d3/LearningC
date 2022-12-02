#include <stdio.h>

void main(void)
{
    float height_inch;
    
    printf("Please enter your height in inch: ");
    scanf("%f", &height_inch);
    printf("Your height in centimeter is: %fcm", height_inch * 2.54f);
}