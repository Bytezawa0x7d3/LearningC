#include <stdio.h>

int mystrlen(const char * str);

int main(void)
{
    printf("%s: %d", "yeegeewowleegao", mystrlen("yeegeewowleegao"));

    return 0;
}

int mystrlen(const char * str)
{
    const char * seek = str;

    while (*seek)
        seek++;

    return seek - str;
}