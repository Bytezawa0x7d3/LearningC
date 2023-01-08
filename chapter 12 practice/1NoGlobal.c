#include <stdio.h>

void critic(int * units);

int main(void)
{
    int units;

    printf("How many pounds to a firkin of butter: ");
    scanf("%d", &units);
    while (units != 56)
        critic(&units);
    printf("You must have looked it up!");

    return 0;
}

void critic(int * units)
{
    printf("No luck, my friend. Try again: ");
    scanf("%d", units);
}