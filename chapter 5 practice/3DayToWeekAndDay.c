#include <stdio.h>
#define D_PER_W 7

int main(void)
{
    int day;

    printf("Please enter a number of days (<=0 to quit): ");
    scanf("%d", &day);
    while (day > 0)
    {
        printf("%d days are %d weeks, %d days.\n",
               day, day / D_PER_W, day % D_PER_W);
        printf("Enter again (<=0 to quit): ");
        scanf("%d", &day);
    }

    return 0;
}