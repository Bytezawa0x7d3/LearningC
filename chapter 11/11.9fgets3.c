#include <stdio.h>
#define STLEN 10

int main(void)
{
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            // 遇到换行符或者空字符时停止
            i++;
        if (words[i] == '\n')
            // 如果因换行符停止 将其替换为空字符
            words[i] = '\0';
        else
            // 如果因为空字符停止 丢弃后面多余的字符
            while (getchar() != '\n')
                continue;
        puts(words);
    }

    return 0;
}