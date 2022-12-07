#include <stdio.h>
#define M_PER_H 60

int main(void)
{
    int min;

    printf("Please enter a number of minutes (<=0 to quit): ");
    scanf("%d", &min);
    while (min > 0)
    {
        printf("%d minutes is %d hour(s) and %d minute(s).\n",
               min, min / M_PER_H, min % M_PER_H);
        printf("Enter again (<=0 to quit): ");
        scanf("%d", &min);
    }

    return 0;
}