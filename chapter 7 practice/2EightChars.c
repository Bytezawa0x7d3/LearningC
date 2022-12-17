#include <stdio.h>

void main(void)
{
    char ch;
    char chs[8];
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        chs[count] = ch;
        if (++count == 8)
        {
            printf("     ASCII      Char\n");
            for (count = 0; count < 8; count++)
                printf("%10d%10c\n", chs[count], chs[count]);
            count = 0;
        }
    }
}