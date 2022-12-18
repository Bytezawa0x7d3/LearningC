#include <stdio.h>

int main(void)
{
    int count = 0;
    int ch;

    while ((ch = getchar()) != EOF)
    {
        putchar('(');
        if (ch >= 1 && ch <= 26)
            printf("^%c", ch + 64);
        else if ((ch == 0 || ch == 127) || (ch >= 27 && ch <= 31))
        {
            switch (ch)
            {
                case 0:
                    printf("NUL");
                    break;
                case 127:
                    printf("DEL");
                case 27:
                    printf("ESC");
                    break;
                case 28:
                    printf("FS");
                    break;
                case 29:
                    printf("GS");
                    break;
                case 30:
                    printf("RS");
                    break;
                case 31:
                    printf("US");
            }
        }
        else
            putchar(ch);
        putchar(',');
        printf("%d) ", ch);
        if (++count % 10 == 0)
            putchar('\n');
    }
    
    return 0;
}