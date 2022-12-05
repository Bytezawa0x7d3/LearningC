#include <stdio.h>
#include <string.h>

void main(void)
{
    char first_name[10];
    char last_name[10];
    int first_len;
    int last_len;

    printf("Please enter your first and last name: ");
    scanf("%s %s", first_name, last_name);
    first_len = strlen(first_name);
    last_len = strlen(last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", first_len, first_len, last_len, last_len);
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", first_len, first_len, last_len, last_len);
}