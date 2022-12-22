#include <stdio.h>

void sum_difference(int *, int *);

int main(void)
{
    int x = 25, y = 10;

    printf("Originally x = %d and y = %d\n", x, y);
    sum_difference(&x, &y);
    printf("Now x = %d and y = %d\n", x, y);

    return 0;
}

void sum_difference(int * u, int * v)
{
    int temp = *u;

    *u = *u + *v;
    *v = temp - *v;
}