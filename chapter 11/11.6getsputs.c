#include <stdio.h>
#define STLEN 81

int main(void)
{
    char words[STLEN];

    puts("Enter a string please:");
    gets(words);
    printf("Your string twice:\n");
    puts(words); // 同等与 printf("%s\n", words);
    puts("Done.");

    return 0;
}