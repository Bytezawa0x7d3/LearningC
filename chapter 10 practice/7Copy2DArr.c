#include <stdio.h>

void copy_arr(double target[], double source[], int n);

int main(void)
{
    double source[6][4] = {
        {1.1, 2.2, 3.3, 4.4},
        {3.3, 5.5, 7.7, 9.9},
        {1.1, 2.2, 3.3, 4.4},
        {3.3, 5.5, 7.7, 9.9},
        {1.1, 2.2, 3.3, 4.4},
        {3.3, 5.5, 7.7, 9.9},
    };
    double target[6][4];
    int x, y;

    for (x = 0; x < 6; x++)
        copy_arr(target[x], source[x], 4);
    
    for (x = 0; x < 6; x++)
    {
        for (y = 0; y < 4; y++)
            printf("%g ", target[x][y]);
        printf("\n");
    }

    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    int i;
    
    for (i = 0; i < n; i++)
        target[i] = source[i];
}