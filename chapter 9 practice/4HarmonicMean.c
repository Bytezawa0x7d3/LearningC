#include <stdio.h>

double mean(double x, double y) {return 1.0 / ((1.0 / x + 1.0 / y) / 2.0);}

int main(void)
{
    double pi = 3.14159;
    double e = 2.71828;
    
    printf("The harmonic mean of pi and e is %lf.", mean(pi, e));
    
    return 0;
}