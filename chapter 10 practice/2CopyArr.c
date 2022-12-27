#include <stdio.h>

void copy_arr(double target[], double source[], int n);
void copy_ptr(double * target, double * source, int n);
void copy_ptrs(double * target, double * source, double * source_end);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    int x;

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    printf("target1: ");
    for (x = 0; x < 5; x++)
        printf("%lg ", target1[x]);
    printf("\ntarget2: ");
    for (x = 0; x < 5; x++)
        printf("%lg ", target2[x]);
    printf("\ntarget3: ");
    for (x = 0; x < 5; x++)
        printf("%lg ", target3[x]);
    
    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    int i;
    
    for (i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double * target, double * source, int n)
{
    int i;
    
    for (i = 0; i < n; i++)
        *(target + i) = *(source + i);
}

void copy_ptrs(double * target, double * source, double * source_end)
{
    int i;

    for (i = source_end - source - 1; i >= 0; i--)
        *(target + i) = *(source + i);
}