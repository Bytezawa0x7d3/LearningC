#include <stdio.h>

void display(char cr, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;
    printf("Enter a character and two integers: ");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d%d", &rows, &cols) != 2)
            break;
        /* 更改自上一个程序 在scanf处也加入了退出功能
           如果提供了非整数内容导致读取失败则跳出循环*/
        display(ch, rows, cols);
        while (getchar() != '\n')
            // 读取并丢弃多余的字符 直到丢弃完行末由于enter带来的换行符
            continue;
        printf("Enter another characters and two integers (newline to quit): ");
    }
    printf("Bye.");

    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}