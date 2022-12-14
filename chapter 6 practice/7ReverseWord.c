#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];
    int index;
    
    printf("Enter a word: ");
    scanf("%s", &word);
    printf("Reversed word: ");
    for (index = strlen(word); index >= 0; index--)
        printf("%c", word[index]);

    return 0;
}