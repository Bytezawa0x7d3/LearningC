#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv)
{
    char * endptr;
    int i;
    double base = strtod(argv[1], &endptr);
    int index = strtol(argv[2], &endptr, 10);

    if (index == 0)
        putchar('1');
    else
    {
        for (i = 0; i < index - 1; i++)
            base *= base;
        printf("%lg", base);
    }

    return 0;
}