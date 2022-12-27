#include <stdio.h>

int get_max(int ar[], int n);

int main(void)
{
    printf("The maximum value in {1, 3, 5, 2, 9, 4, 3, 8} is %d.",
            get_max((int [8]){1, 3, 5, 2, 9, 4, 3, 8}, 8));
    
    return 0;
}

int get_max(int ar[], int n)
{
    int max = ar[0];
    int i;

    for (i = 1; i < n; i++)
        max = (ar[i] > max) ? ar[i] : max;

    return max;
}