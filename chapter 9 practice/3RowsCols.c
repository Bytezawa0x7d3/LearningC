#include <stdio.h>

void rowscols(char ch, int col, int row);

int main(void)
{
    chline('$', 5, 10);

    return 0;
}

void chline(char ch, int col, int row)
{
    int a, b;
    
    for (a = 0; a < row; a++)
    {
        for (b = 0; b < col; b++)
            printf("%c", ch);
        printf("\n");
    }
}