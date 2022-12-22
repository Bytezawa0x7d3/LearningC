#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    chline('$', 5, 10);

    return 0;
}

void chline(char ch, int i, int j)
{
    int a, b;
    
    for (a = 0; a < j; a++)
    {
        for (b = 0; b < i; b++)
            printf("%c", ch);
        printf("\n");
    }
}