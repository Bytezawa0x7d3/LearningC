#include <stdio.h>

int is_within(char ch, char str[]);

int main(void)
{
    char str[] = "Hello world!";
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (is_within(ch, str))
            printf("%c is in %s.\n", ch, str);
        else
            printf("%c is NOT in %s.\n", ch, str);
    }

    return 0;
}

int is_within(char ch, char str[])
{
    while (*str)
    {
        if (*str == ch)
            return 1;
        str++;
    }
    
    return 0;
}