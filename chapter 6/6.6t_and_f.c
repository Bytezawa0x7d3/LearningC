#include <stdio.h>

int main(void)
{
    int true_val, false_val;

    true_val = (1 + 1 == 2);
    false_val = (1 + 1 != 2);
    printf("true = %d\nfalse = %d", true_val, false_val);

    return 0;
}