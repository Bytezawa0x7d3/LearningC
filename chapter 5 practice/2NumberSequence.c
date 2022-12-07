#include <stdio.h>

void main(void)
{
    int num;
    int limit;

    printf("Enter a number: ");
    scanf("%d", &num);
    limit = num + 10;

    while (num <= limit)
    {
        printf("%d ", num++);
    }
}