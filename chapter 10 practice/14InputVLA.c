#include <stdio.h>
#define ROWS 4
#define COLS 8

void get_input(int n, int m, double ar[n][m]);
void get_average(int n, int m, double ar[n][m]);
void get_max(int n, int m, double ar[n][m]);

int main(void)
{
    double ar[ROWS][COLS];

    get_input(ROWS, COLS, ar);
    get_average(ROWS, COLS, ar);
    get_max(ROWS, COLS, ar);

    return 0;
}

void get_input(int n, int m, double ar[n][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        printf("Input %d floating-point number for set%d:\n", m, i);
        for (j = 0; j < m; j++)
            scanf("%lf", &ar[i][j]);
        while (getchar() != '\n')
            continue;
    }
}

void get_average(int n, int m, double ar[n][m])
{
    int x, y;
    double total, subtotal;

    for (x = 0, total = 0.0; x < n; x++)
    {
        for (y = 0, subtotal = 0.0; y < m; y++)
            subtotal += ar[x][y];
        total += subtotal;
        printf("Average value of set%d: %g\n", x, subtotal / m);
    }
    printf("Average value of all: %g\n", total / (n * m));
}

void get_max(int n, int m, double ar[n][m])
{
    int x, y;
    double max = ar[0][0];

    for (x = 0; x < n; x++)
        for (y = 0; y < m; y++)
            max = (ar[x][y] > max) ? ar[x][y] : max;
    printf("The maximum value of all: %g", max);
}