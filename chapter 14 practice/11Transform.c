#include <stdio.h>
#include <math.h>
#define MAXNUMS 10

void transform(double source[], double target[], int n, double (* func)(double));


int main(void)
{
    double numbers[MAXNUMS] = {
        0.091, 1.121, 2.411, 3.512, 2.948,
        6.182, 6.918, 7.812, 8.091, 9.102
    };
    double results[MAXNUMS];
    double (* funcs[4])(double) = {sin, cos, tan, sqrt};
    char * funcnames[4] = {"sin", "cos", "tan", "sqrt"};
    int choice, x;

    puts("0) sin     1) cos     2) tan     3) sqrt");
    printf("Enter your choice of function (q to quit): ");
    while (scanf("%d", &choice) == 1)
    {
        transform(numbers, results, MAXNUMS, funcs[choice]);
        for (x = 0; x < MAXNUMS; x++)
            printf("%s(%g) = %g\n", funcnames[choice], numbers[x], results[x]);
        printf("\nEnter your next choice of function (q to quit): ");
    }
    puts("Done.");

    return 0;
}


void transform(double source[], double target[], int n, double (* func)(double))
{
    int x;

    for (x = 0; x < n; x++)
        target[x] = func(source[x]);
}