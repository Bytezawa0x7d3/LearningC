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
    char temp;

    for (i = 0; i < n; i++)
    {
        temp = getchar();
        if (temp == '\0' || temp == '\n' || temp == '\t')
        {
            target[i] = '\0';
            break;
        }
        target[i] = temp;
    }
    target[n] = '\0';
}