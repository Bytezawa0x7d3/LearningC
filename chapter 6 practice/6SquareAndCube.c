#include <stdio.h>

int main(void)
{
    int lowlim, uplim, x;

    printf("Enter the lower and upper limit: ");
    scanf("%d%d", &lowlim, &uplim);
    printf("         x       x^2       x^3\n");
    for (x = lowlim; x <= uplim; x++)
        printf("%10d%10d%10d\n", x, x*x, x*x*x);

    return 0;
}