#include <stdio.h>

char * strchr(const char * str, char ch);

int main(void)
{
    char st[] = "Yee gee wow lee giao.";
    char * ptr;

    ptr = strchr(st, 'o');
    *ptr = '@';
    puts(st);

    return 0;
}

char * strchr(const char * str, char ch)
{
    while (*str)
    {
        if (*str == ch)
            return str;
        str++;
    }
    
    return NULL;
}