#include <stdio.h>

void main(void)
{
    char ch;
    int space = 0;
    int line = 0;
    int other = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case ' ': space++;
                  break;
        case '\n': line++;
                   break;
        default: other++;
        }
    }
    printf("Space: %d, \\n: %d, other: %d", space, line, other);
}