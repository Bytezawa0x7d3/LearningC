#include <stdio.h>

void getword(char target[], int n);

int main(void)
{
    char str[11];

    getword(str, 11);
    puts(str);

    return 0;
}

void getword(char target[], int n)
{
    char ch;
    int i = 0;

    while ((ch = getchar()) == ' ' || ch == '\n' || ch == '\t')
        continue;
    target[i++] = ch;
    while (i < n - 1 && (ch = getchar()) != ' ' && ch != '\n' && ch != '\t')
        target[i++] = ch;
    target[i] = '\0';
}