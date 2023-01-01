#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

int main(void)
{
    char str[11];

    s_gets(str, 11);
    puts(str);
    s_gets(str, 11);
    puts(str);

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // ret_val != NULL
    {
        if (find = strchr(st, '\n'))
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}