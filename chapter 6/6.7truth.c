#include <stdio.h>

int main(void)
{
    int n = 3;
    while (n) printf("%2d is true\n", n--); // true: 3 2 1
    printf("%2d is false\n", n); // false: 0

    n = -3;
    while (n) printf("%2d is true\n", n++); // true: -3 -2 -1
    printf("%2d is false\n", n); // false: 0

    // C语言中非0的值都视为真

    return 0;
}