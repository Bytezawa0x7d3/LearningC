#include <stdio.h>

int main(void)
{
    int length, lines, spaces, x, y;
    char ch, begin = 'A', m;

    printf("Enter a capital letter: ");
    scanf("%c", &ch);
    lines = ch - begin + 1;
    length = (ch - begin) * 2 + 1;

    for (x = 0; x < lines; x++)
    {
        spaces = (length - (x * 2 + 1)) / 2;
        for (y = 0; y < spaces; y++)
            printf(" ");
        for (m = begin; m < (begin + (char)x); m++)
            printf("%c", m);
        printf("%c", begin + (char)(x));
        for (m = begin + (char)(x) - 1; m >= begin; m--)
            printf("%c", m);
        for (y = 0; y < spaces; y++)
            printf(" ");
        printf("\n");
    }

    return 0;
}