#include <stdio.h>

void to_base_n(int num, int base);

int main(void)
{
    printf("The binary expression of 5 is ");
    to_base_n(5, 2), putchar('\n');
    printf("The ternary expression of 14 is ");
    to_base_n(14, 3), putchar('\n');
    printf("The quanternary expression of 5 is ");
    to_base_n(5, 4), putchar('\n');
    
    return 0;
}

void to_base_n(int num, int base)
{
    if (num >= base)
        to_base_n(num / base, base);
    printf("%d", num % base);
}