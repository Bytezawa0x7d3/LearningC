#include <stdio.h>

void add(int ar1[], int ar2[], int ar3[], int n);

int main(void)
{
    int a[4] = {2, 4, 5, 8};
    int b[4] = {1, 0, 4, 6};
    int c[4];

    add(a, b, c, 4);
    printf("%d %d %d %d", c[0], c[1], c[2], c[3]);

    return 0;
}

void add(int ar1[], int ar2[], int ar3[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        ar3[i] = ar1[i] + ar2[i]; 
}