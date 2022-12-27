#include <stdio.h>

void copy_ptr(double * target, double * source, int n);

int main(void)
{
    double source[7] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8};
    double target[3];

    copy_ptr(target, source + 2, 3);
    printf("%g %g %g", target[0], target[1], target[2]);

    return 0;
}

void copy_ptr(double * target, double * source, int n)
{
    int i;
    
    for (i = 0; i < n; i++)
        *(target + i) = *(source + i);
}