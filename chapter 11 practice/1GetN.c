#include <stdio.h>

void getinput(char target[], int n);

int main(void)
{
    char str[11];

    getinput(str, 10);
    puts(str);

    return 0;
}

void getinput(char target[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        target[i] = getchar();
}