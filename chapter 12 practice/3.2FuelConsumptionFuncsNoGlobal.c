#include <stdio.h>


void set_mode(int * prevmode, int * mode)
{    
    if (*mode > 1)
    {
        *mode = *prevmode;
        printf("Invalid mode specified. Mode %s used.\n",
                (*mode == 0) ? "0 (metric)" : "1 (US)");
    }
    else
        *prevmode = *mode;
}


void get_info(int mode, double * dist, double * fuel)
{
    char * dist_unit = (mode == 0) ? "kilometers" : "miles";
    char * fuel_unit = (mode == 0) ? "liters" : "gallons";

    printf("Enter distance traveled in %s: ", dist_unit);
    while (scanf("%lf", dist) != 1)
    {
        printf("Invalid input detected. Enter again: ");
        while (getchar() != '\n')
            continue;
    }
    printf("Enter fuel consumed in %s: ", fuel_unit);
    while (scanf("%lf", fuel) != 1)
    {
        printf("Invalid input detected. Enter again: ");
        while (getchar() != '\n')
            continue;
    }
}


void show_info(int mode, double dist, double fuel)
{
    if (mode == 0)
        printf("Fuel consumption is %.2lf liters per 100 km.\n",
                fuel / (dist / 100.0));
    else
        printf("Fuel consumption is %.2lf miles per gallon.\n",
                dist / fuel);
}