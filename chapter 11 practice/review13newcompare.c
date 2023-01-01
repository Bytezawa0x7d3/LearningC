#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "GRANT"
#define SIZE 40

char * s_gets(char * st, int n);


int main(void)
{
    char try[SIZE];
    char * ptr;

    puts("Who is buried in Grant's tomb: ");
    s_gets(try, SIZE);
    for (ptr = try; *ptr != '\0'; ptr++)
        *ptr = toupper(*ptr);
    while (strcmp(try, ANSWER) != 0) // 测试条件可以改写为 while (strcmp(try, ANSWER))
    {
        puts("No, that's wrong. Try again: ");
        s_gets(try, SIZE);
        for (ptr = try; *ptr != '\0'; ptr++)
            *ptr = toupper(*ptr);
    }
    puts("That is right.");

    return 0;
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