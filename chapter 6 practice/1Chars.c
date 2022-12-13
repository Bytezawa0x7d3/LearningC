#include <stdio.h>

int main(void)
{
    char lowers[26];
    int i;

    for (i = 0; i < 26; i++)
        lowers[i] = (char)i + 'a';
    printf("  Char ASCII\n");
    for (i = 0; i < 26; i++)
        printf("%6c%6d\n", lowers[i], lowers[i]);
    
    return 0;
}