#include <stdio.h>

static int count = 0;

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        int func(void)
        {
            extern int count;
            return ++count;
        }
        printf("func() is called %d times.\n", func());
    }

    return 0;
}