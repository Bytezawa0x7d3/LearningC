#include <stdio.h>
#include <ctype.h>
#include <string.h>

int atoi(char str[]);

int main(void)
{
    char s1[] = "1024";
    char s2[] = "2";

    printf("%d", atoi(s1) * atoi(s2));

    return 0;
}

int atoi(char str[])
{
    char * ptr = str;
    int num = 0;
    int index;
    int x, y;


    while (*ptr)
    {
        if (!isdigit(*ptr))
            return num;
        ptr++;
    }

    for (x = 0; x < strlen(str); x++)
    {
        for (index = 1, y = 0; y < strlen(str) - x - 1; y++)
            index *= 10;
        num += index * (str[x] - 48);
    }

    return num;
}