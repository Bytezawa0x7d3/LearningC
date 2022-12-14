#include <stdio.h>

int main(void)
{
    char x;
    char y;

    for (x = 'F'; x >= 'A'; x--)
    {
        for (y = 'F'; y >= x; y--)
            printf("%c", y);
        printf("\n");
    }
    
    return 0;
}