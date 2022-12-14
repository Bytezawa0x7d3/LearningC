#include <stdio.h>
int main(void)
{
    char ch = 'A';
    int x, y;

    for (x = 0; x < 6; x++)
    {
        for (y = 0; y <= x; y++, ch++)
            printf("%c", ch);
        printf("\n");
    }
    
    return 0;
}