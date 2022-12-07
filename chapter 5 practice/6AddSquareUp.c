#include <stdio.h>

int main(void)
{
    int count, sum, limit;

    count = 0;
    sum = 0;
    printf("Enter a number as the limit of sum sequence: ");
    scanf("%d", &limit);
    while (count++ < limit)
    {
        sum = sum + count*count;
    }
    printf("sum = %d", sum);

    return 0;
}