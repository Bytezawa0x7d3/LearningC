#include <stdio.h>
#define PERIOD '.'

int main(void)
{
    char ch;
    int charcount = 0;

    printf("Enter a sentence:\n");
    while((ch = getchar()) != PERIOD)
    // 当获得的下一个字符为英文句号时测试条件为假 自动结束循环
    {
        if (ch != '"' && ch != '\'')
            // 使用了与逻辑运算符 当字符既不是单引号也不是双引号才计数一次
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}