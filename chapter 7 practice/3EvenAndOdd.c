#include <stdio.h>

void main(void)
{
    int num;
    int even = 0;
    float even_total = 0.0;
    int odd = 0;
    float odd_total = 0.0;

    while (scanf("%d", &num), num != 0)
    {
        switch (num % 2)
        {
            case 0:
                even++;
                even_total += num;
                break;
            default:
                odd++;
                odd_total += num;
        }
    }
    printf("Even number: %d\nOdd number: %d\n", even, odd);
    printf("Even number average: %f\n", even_total / even);
    printf("Odd number average: %f", odd_total / odd);
}