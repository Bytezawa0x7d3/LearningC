#include <stdio.h>
#include <ctype.h>

int getorder(char ch);
void readin(void);

int main(void)
{
    printf("Enter some text: ");
    readin();

    return 0;
}

int getorder(char ch)
{
    if (isalpha(ch))
        return (tolower(ch) - 'a' + 1);
    else
        return -1;
}

void readin(void)
{
    char ch;
    
    while ((ch = getchar()) != EOF)
        printf("%c %d\n", ch, getorder(ch)); 
}