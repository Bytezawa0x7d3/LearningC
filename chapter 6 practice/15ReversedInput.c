#include <stdio.h>
#include <string.h>

int main(void)
{
    char chs[20];
    int index = 0;

    printf("Enter a string: ");
    for (index = 0; scanf("%c", &chs[index]), chs[index] != '\n'; index++)
        ;
    for (index = strlen(chs) - 2; index >= 0; index--)
        printf("%c", chs[index]);
    
    return 0;
}