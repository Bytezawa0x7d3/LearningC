#include <stdio.h>
#include <stdbool.h>

void main(void)
{
    int ei = 0;
    bool e = false;
    char ch;
    char prev = ' ';

    while ((ch = getchar()) != '#')
    {
        if (prev == 'e' && ch == 'i')
            ei++;
        prev = ch;
    }
    printf("There %s %d 'ei' in the text you entered.",
            (ei > 1) ? "are" : "is", ei);
}