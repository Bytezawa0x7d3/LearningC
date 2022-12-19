#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    bool inword = false;
    int word = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (isspace(ch) || ispunct(ch))
            inword = false;
        else if (!inword && (islower(ch) || isupper(ch)))
        {
            word++;
            inword = true;
        }
    }
    printf("%d words read.", word);

    return 0;
}