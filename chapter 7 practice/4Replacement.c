#include <stdio.h>

void main(void)
{
    char ch;
    int rep1 = 0;
    int rep2 = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            rep1++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            rep2++;
        }
        else
            putchar(ch);
    }
    printf("\n'.' is replaced by '!' for %d times,\n", rep1);
    printf("'!' is replaced by '!!' for %d times.\n", rep2);
    printf("Totally %d times.", rep1 + rep2);
}