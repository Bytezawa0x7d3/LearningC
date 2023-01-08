#include <stdio.h>
#include "3.3FuelConsumptionHeaderNoGlobal.h"

int main(void)
{
    int prevmode = 0, mode;
    double dist, fuel;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        set_mode(&prevmode, &mode);
        get_info(mode, &dist, &fuel);
        show_info(mode, dist, fuel);
        printf("\nEnter 0 for metric mode, 1 for US mode (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}