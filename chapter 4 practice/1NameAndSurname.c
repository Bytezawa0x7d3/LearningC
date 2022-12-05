#include <stdio.h>

void main(void)
{
    char first_name[10];
    char last_name[10];

    printf("Please enter your first name and last name: ");
    scanf("%s %s", first_name, last_name);
    printf("%s, %s", first_name, last_name);
}