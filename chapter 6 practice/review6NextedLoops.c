#include <stdio.h>

int main(void)
{
    int x, y;

    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 8; y++)
            printf("$");
        printf("\n");
    }

    return 0;
}