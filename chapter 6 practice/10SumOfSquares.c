#include <stdio.h>

int main(void)
{
    int lower, upper, sum, i;

    printf("Enter lower and upper integer limits: ");
    while(scanf("%d%d", &lower, &upper), upper > lower)
    {
        for (i = lower; i <= upper; i++)
        {
            sum += i*i;
        }
        printf("The sum of the squares from %d to %d is %d.\n", lower, upper, sum);
        printf("Enter the next set of limits: ");
    }

    return 0;
}