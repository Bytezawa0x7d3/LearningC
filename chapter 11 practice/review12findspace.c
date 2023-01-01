#include <stdio.h>

char * findspace(const char * str);

int main(void)
{
    char str[] = "This is yee gee wow lee giao!";
    char * space;

    while (space = findspace(str))
        // Find space in str and change it to $ until no space remains.
        *space = '$';
    puts(str);

    return 0;
}

char * findspace(const char * str)
{
    while (*str)
    {
        if (*str == ' ')
            return str;
        else
            str++;
    }

    return NULL;
}