#include <stdio.h>

int main(int argc, char * argv[])
{
    int i;
    char * temp;

    for (i = 0; i < argc / 2; i++)
    {
        temp = argv[i];
        argv[i] = argv[argc - i - 1];
        argv[argc - i - 1] = temp;
    }

    for (i = 0; i < argc - 1; i++)
    {
        fputs(argv[i], stdout);
        putchar(' ');
    }

    return 0;
}