#include <stdio.h>

int max(int, int, int);

int main(void)
{
    int x = 12, y = 8, z = 4;

    printf("The greatest value among %d, %d and %d is %d.",
            x, y, z, max(x, y, z));

    return 0;
}

int max(int a, int b, int c)
{
    int temp;

    temp = (a > b) ? a : b;
    
    return (temp > c) ? temp : c;
}