#include <stdio.h>

int main(void)
{
    int count = 0;

    while (getchar() != EOF)
        count++;
    printf("This file contains %d characters.", count);
    
    return 0;
}