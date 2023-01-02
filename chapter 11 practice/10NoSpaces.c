#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);
void rmspc(char input[], char output[]);

int main(void)
{
    char input[21];
    char output[21];

    while (s_gets(input, 21) && input[0] != '\0')
    {
        rmspc(input, output);
        puts(output);
    }
}

void rmspc(char input[], char output[])
{
    while (*input)
    {
        if (*input != ' ')
        {
            *output = *input;
            output++;
        }
        input++;
    }
    *output = '\0';
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