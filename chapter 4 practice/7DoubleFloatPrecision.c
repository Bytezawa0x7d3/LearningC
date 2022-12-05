#include <stdio.h>
#include <float.h>

void main(void)
{
    double d = 1.0/3.0;
    float f = 1.0/3.0;

    printf("FLT_DIG = %d\nDBL_DIG = %d\n", FLT_DIG, DBL_DIG);
    printf("When precision is 6:\nd = %.6f\nf = %.6f\n", d, f);
    printf("When precision is 12:\nd = %.12f\nf = %.12f\n", d, f);
    printf("When precision is 16:\nd = %.16f\nf = %.16f\n", d, f);
}