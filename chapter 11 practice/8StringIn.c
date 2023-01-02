#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char * string_in(const char s1[], const char s2[]);

int main(void)
{
    char s1[] = "Hello world!";
    char s2[] = "wor";
    char s3[] = "llo";
    char s4[] = "gee";
    char * ptr;

    ptr = string_in(s1, s2);
    puts(ptr);
    ptr = string_in(s1, s3);
    puts(ptr);
    ptr = string_in(s1, s4);
    if (!ptr)
        printf("%s is not in %s.", s4, s1);

    return 0;
}

char * string_in(const char s1[], const char s2[])
{
    int x, y;
    bool isin;

    for (x = 0; x < (strlen(s1) - strlen(s2) + 1); x++)
    {   
        isin = true;
        for (y = x; y < (x + strlen(s2)); y++)
        {
            if (s1[y] != s2[y-x])
            {
                isin = false;
                break;
            }
        }
        if (isin)
            return &s1[x];
    }

    return NULL;
}