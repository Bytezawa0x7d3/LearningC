#include <stdio.h>

void display(char cr, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;
    printf("Enter a character and two integers: ");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d%d", &rows, &cols);
        /* 此处scanf只读取输入的符号之后的两个整数
           用户输入enter提交时还会附带一个换行符
           scanf中没有能够接受换行符的转换说明
           换行符就会留下供下次获得输入的函数读取
           下一次读取是在循环顶部 但获得换行符则意味着退出
           因此本程序会在一次输入之后由于遗留的换行符意外结束 */
        display(ch, rows, cols);
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