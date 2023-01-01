#include <stdio.h>
#include <stdbool.h>

char * string_in(const char s1[], const char s2[]);

int main(void)
{
    char s1[] = "Hello world!";
    char s2[] = "wor";
    char s3[] = "lol";
    char * ret_val;

    if (ret_val = string_in(s1, s2))
    {
        printf("%s is in %s, beginning character location: %p\n",
                s2, s1, ret_val);
        puts(ret_val);
    }
    if (!string_in(s1, s3))
        printf("%s is NOT in %s.", s3, s1);

    return 0;
}

char * string_in(const char s1[], const char s2[])
{
    bool isin;

    for (; *s1; s1++)
    {   
        isin = true;
        for (; *s2; s2++)
        {
            if (*s2 != *s1)
            {
                isin = false;
                break;
            }
        }
        if (isin)
            return s1;
    }

    return NULL;
}