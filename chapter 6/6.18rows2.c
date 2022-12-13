#include <stdio.h>

int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        // 外层循环每次迭代时 row的值都不同
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
            printf("%c", ch);
            // 内层循环初始化表达式含有row 每次初始化ch值都不同
        printf("\n");
    }
}