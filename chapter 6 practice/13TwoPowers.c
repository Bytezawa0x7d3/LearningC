#include <stdio.h>

int main(void)
{
    int powers[8], i, x, y;

    for (x = 0; i = 1, x < 8; x++)
    {
        for (y = 0; y <= x; y++)
            i *= 2;
        powers[x] = i;
    }

    i = 0;
    do
    {
        printf("%d ", powers[i]);
    } while (++i < 8);
    
    return 0;
}