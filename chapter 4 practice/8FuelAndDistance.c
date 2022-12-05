#include <stdio.h>

void main(void)
{
    const float gallon_to_litre = 3.785;
    const float mile_to_km = 1.609;
    float distance_mile;
    float fuel_gallon;

    printf("Please enter distance travelled in mile and fuel used in gallon: ");
    scanf("%f %f", &distance_mile, &fuel_gallon);
    printf("%.1f mile/gallon, %.1f litre/100km",
           distance_mile/fuel_gallon,
           100*((fuel_gallon*gallon_to_litre)/(distance_mile*mile_to_km)));
}