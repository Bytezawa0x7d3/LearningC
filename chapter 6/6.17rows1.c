#include <stdio.h>
#define ROWS 6
#define CHARS 10

int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'A'; ch <= 'A' + CHARS; ch++)
        {
            // 内层循环 打印一排字符
            printf("%c", ch);
        }
        // 外层循环 内层每次结束 进行换行
        printf("\n");
    }

    return 0;
}