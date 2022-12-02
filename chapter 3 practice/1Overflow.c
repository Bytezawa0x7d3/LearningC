#include <stdio.h>

void main(void)
{
    int i_overflow = 2147483647;
    int i_underflow = -2147483648;
    float f_overflow = 1e37f;
    float f_underflow = 1e-37f;

    printf("integer overflow: %d + 1 = %d\n", i_overflow, i_overflow + 1);
    printf("integer underflow: %d - 1 = %d\n", i_underflow, i_underflow - 1);
    printf("float overflow: %f + 1.0e10 = %f\n", f_overflow, f_overflow + 1.0e10f);
    printf("float underflow: %f - 1.0e10 = %f\n", f_underflow, f_underflow - 1.0e10f);
}