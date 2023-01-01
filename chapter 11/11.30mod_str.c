#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81

void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char * find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n'); // 返回指向换行符字符的指针
    if (find) // 如果不是空指针 就修改其指向的内容为空字符
        *find = '\0';
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));

    return 0;
}

void ToUpper(char * str)
{
    while (*str)
    /* 测试条件为当前字符 空字符的数值为0
       遇到空字符时 字符串结束 测试条件为假 循环结束 */
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char * str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }

    return ct;
}