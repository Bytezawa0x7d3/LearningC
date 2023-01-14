#include <stdio.h>

double func1(double x, double y) {return x + y;}
double func2(double x, double y) {return x - y;}
double func3(double x, double y) {return x * y;}
double func4(double x, double y) {return x / y;}

int main(void)
{
    double (* arr[4])(double, double) = {func1, func2, func3, func4};

    printf("arr[1](10.0, 2.5) = %lf", arr[1](10.0, 2.5));

    return 0;
}
