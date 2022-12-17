#include <stdio.h>
#include <stdbool.h>

bool isprime(int number);

void main(void)
{
    int num;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("The following numbers are primes lower than or equal to the number you provided:\n");
    for (i = 1; i <= num; i++)
        if (isprime(i))
            printf("%d ", i);
}

bool isprime(int number)
{
    int test;

    if (number == 1)
        return false;
    for (test = 2; test * test <= number; test++)
        if (number % test == 0)
            return false;
    return true;
}