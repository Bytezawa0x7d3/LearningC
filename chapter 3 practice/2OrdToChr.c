#include <stdio.h>

void main(void)
{
    char ord;
    printf("Please input a ASCII value in integer:");
    scanf("%d", &ord);
    printf("The value %d you provided maps '%c' in ASCII.", ord, ord);
}