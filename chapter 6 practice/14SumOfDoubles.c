#include <stdio.h>

int main(void)
{
    double nums[8], sums[8], sum = 0;
    int i;

    printf("Enter 8 floating-point numbers: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%lf", &nums[i]);
        sum += nums[i];
        sums[i] = sum;
    }

    for (i = 0; i < 8; i++)
        printf("%10lf ", nums[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%10lf ", sums[i]);

    return 0;
}
