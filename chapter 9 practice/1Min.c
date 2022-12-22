#include <stdio.h>

double min(double x, double y) {return (x > y) ? y : x;}

int main(void)
{
    double x = 3.14159, y = 2.71828;

    printf("The lower one of %lf and %lf is %lf.",
            x, y, min(x, y));
    
    return 0;
}    