#include <stdio.h>
#include <ctype.h> // 包含检测字符是否为空格的isspace()函数
#include <stdbool.h> // 使用true和false作为布尔变量
#define STOP '|'

int main(void)
{
    char c; // 读入的字符
    char prev; // 读入的前一个字符
    long n_chars = 0L; // 总字符数
    int n_lines = 0; // 行数
    int n_words = 0; // 单词数
    int p_lines = 0; // 不完整的行数
    bool inword = false; // 是否在单词中

    printf("Enter the text to be analyzed (| to terminate):\n");
    prev = '\n'; // 用于识别完整的行
    while ((c = getchar()) != STOP)
    {
        n_chars++; // 统计一个字符
        if (c == '\n')
            n_lines++; // 碰到换行符 统计一行
        if (!isspace(c) && !inword)
        // 不在单词中时遇到非空字符
        {
            inword = true; // 标记为正在单词中
            n_words++; // 统计一个单词
        }
        if (isspace(c) && inword)
        // 在单词中时遇到空字符
            inword = false;
        prev = c; // 处理完的字符作为上一个字符
    }
    if (prev != '\n')
        p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, ",
            n_chars, n_words, n_lines);
    printf("partial lines = %d.", p_lines);

    return 0;
}