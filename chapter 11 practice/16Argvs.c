#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char * argv[])
{
    int i, j;
    char str[30];
    char * find;

    fgets(str, 30, stdin);
    if (find = strchr(str, '\n'))
        *find = '\0';
    else
    {
        while (getchar() != '\n')
            continue;
    }

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-u") == 0)
        {
            for (j = 0; j < strlen(str); j++)
            {
                if (isalpha(str[j]))
                    str[j] = toupper(str[j]);
            }
        }
        else if (strcmp(argv[i], "-l") == 0)
        {
            for (j = 0; j < strlen(str); j++)
            {
                if (isalpha(str[j]))
                    str[j] = tolower(str[j]);
            }
        }
    }

    puts(str);

    return 0;
}