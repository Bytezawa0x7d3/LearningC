#include <stdio.h>

void getword(char target[]);

int main(void)
{
    char str[11];

    getword(str);
    puts(str);

    return 0;
}

void getword(char target[])
{
    char ch;

    while ((ch = getchar()) == ' ' || ch == '\n' || ch == '\t')
        continue;
    *target = ch;
    while ((ch = getchar()) != ' ' && ch != '\n' && ch != '\t')
    {
        target++;
        *target = ch;
    }
    *++target = '\0';
}