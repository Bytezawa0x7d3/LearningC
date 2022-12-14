#include <stdio.h>

int main(void)
{
    int integers[8], i;

    printf("Enter 8 integers splited by spaces: ");
    for(i = 0; i < 8; i++)
        scanf("%d", &integers[i]);
    printf("Reversed integers: ");
    for (i = 7; i >= 0; i--)
        printf("%d ", integers[i]);

    return 0;
}