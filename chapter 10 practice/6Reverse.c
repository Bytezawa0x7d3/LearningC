#include <stdio.h>

void reverse(double ar[], int n);

int main(void)
{
    double ar[8] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
    int i;

    reverse(ar, 8);
    for (i = 0; i < 8; i++)
        printf("%g ", ar[i]);

    return 0;
}

void reverse(double ar[], int n)
{
    double temp;
    int i;

    for (i = 0; i < n / 2; i++)
    {
        temp = ar[i];
        ar[i] = ar[n - i - 1];
        ar[n - i - 1] = temp;
    }
}