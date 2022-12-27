#include <stdio.h>

int get_max_index(double ar[], int n);

int main(void)
{
    printf("The index of the maximum value of {1.1, 3.3, 2.2, 5.5, 4.4} is %d.",
            get_max_index((double [5]){1.1, 3.3, 2.2, 5.5, 4.4}, 5));

    return 0;
}

int get_max_index(double ar[], int n)
{
    double max = ar[0];
    int i;

    for (i = 1; i < n; i++)
        max = (ar[i] > max) ? ar[i] : max;

    for (i = 0; i < n; i++)
        if (ar[i] == max)
            return i;
}