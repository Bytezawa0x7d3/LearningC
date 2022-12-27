#include <stdio.h>

void get_input(double ar[][5]);
void get_average(double ar[][5]);
void get_max(double ar[][5]);

int main(void)
{
    double ar[3][5];

    get_input(ar);
    get_average(ar);
    get_max(ar);

    return 0;
}

void get_input(double ar[][5])
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Input 5 floating-point number for set%d:\n", i);
        scanf("%lf%lf%lf%lf%lf", ar[i], ar[i] + 1, ar[i] + 2, ar[i] + 3, ar[i] + 4);
        while (getchar() != '\n')
            continue;
    }
}

void get_average(double ar[][5])
{
    int x, y;
    double total, subtotal;

    for (x = 0, total = 0.0; x < 3; x++)
    {
        for (y = 0, subtotal = 0.0; y < 5; y++)
            subtotal += ar[x][y];
        total += subtotal;
        printf("Average value of set%d: %g\n", x, subtotal / 5.0);
    }
    printf("Average value of all: %g\n", total / 15.0);
}

void get_max(double ar[][5])
{
    int x, y;
    double max = ar[0][0];

    for (x = 0; x < 3; x++)
        for (y = 0; y < 5; y++)
            max = (ar[x][y] > max) ? ar[x][y] : max;
    printf("The maximum value of all: %g", max);
}