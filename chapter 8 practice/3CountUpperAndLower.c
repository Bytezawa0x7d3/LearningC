#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int upper = 0, lower = 0;
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            upper++;
        else if (islower(ch))
            lower++;
    }
    printf("Upper letters: %d\nLower letters: %d", upper, lower);
    
    return 0;
}