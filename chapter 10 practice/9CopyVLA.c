#include <stdio.h>

void copy_vla(int n, int m, double source[n][m], double target[n][m]);
void show_vla(int n, int m, double vla[n][m]);

int main(void)
{
    double src[3][5] = {
        {1.5, 2.4, 3.3, 4.2, 5.1},
        {1.5, 2.4, 3.3, 4.2, 5.1},
        {1.5, 2.4, 3.3, 4.2, 5.1}
    };
    double trg[3][5];

    copy_vla(3, 5, src, trg);
    show_vla(3, 5, trg);

    return 0;
}

void copy_vla(int n, int m, double source[n][m], double target[n][m])
{
    int x, y;

    for (x = 0; x < n; x++)
        for (y = 0; y < m; y++)
            target[x][y] = source[x][y];
}

void show_vla(int n, int m, double vla[n][m])
{
    int x, y;

    for (x = 0; x < n; x++)
    {
        for (y = 0; y < m; y++)
            printf("%g ", vla[x][y]);
        printf("\n");
    }
}