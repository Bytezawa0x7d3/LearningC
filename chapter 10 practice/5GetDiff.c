#include <stdio.h>

double get_diff(double ar[], int n);

int main(void)
{
    double ar[10] = {9.81, 12.81, 5.34, 6.67, 8.93, 5.01, 1.11, 4.38, 8.38, 10.18};
    int i;
    
    for (i = 0; i < 10; i++)
        printf("%lg ", ar[i]);
    printf("\nThe difference of max and min is %lg.",
            get_diff(ar, 10));
    
    return 0;
}

double get_diff(double ar[], int n)
{
    double max = ar[0];
    double min = ar[0];
    int i;

    for (i = 1; i < n; i++)
    {
        max = (ar[i] > max) ? ar[i] : max;
        min = (ar[i] < min) ? ar[i] : min;
    }

    return max - min;
}