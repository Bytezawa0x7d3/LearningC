#include <stdio.h>
#include <string.h>

void giao(char str[]);
char * s_gets(char * st, int n);

int main(void)
{
    char str[21];

    while (s_gets(str, 21))
    {
        giao(str);
        puts(str);
    }

    return 0;
}

void giao(char str[])
{
    char temp;
    int i;
    
    for (i = 0; i < (strlen(str) / 2); i++)
    {
        temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}