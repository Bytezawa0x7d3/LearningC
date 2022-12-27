#include <stdio.h>

void doubled(double ar[][5], int n);
void show(double ar[][5], int n);

int main(void)
{
    double ar[3][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {2.2, 3.3, 4.4, 5.5, 6.6},
        {3.3, 4.4, 5.5, 6.6, 7.7}
    };

    show(ar, 3);
    doubled(ar, 3);
    printf("\nNow the array is doubled.\n");
    show(ar, 3);

    return 0;
}


void doubled(double ar[][5], int n)
{
    int x, y;

    for (x = 0; x < n; x++)
        for (y = 0; y < 5; y++)
            ar[x][y] *= 2;
}

void show(double ar[][5], int n)
{
    int x, y;

    for (x = 0; x < n; x++)
    {
        for (y = 0; y < 5; y++)
            printf("%8g ", ar[x][y]);
        printf("\n");
    }
}