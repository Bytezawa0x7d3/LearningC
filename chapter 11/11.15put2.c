#include <stdio.h>

int put2(const char * string)
{
    int count = 0;

    while (*string)
    /* 以string指向的值为测试条件
       字符串末尾的空字符\0的码值是0
       所以遇见空字符 测试条件为0 循环结束 */
    {
        putchar(*string++);
        count++; // 统计输出的字符数
    }
    putchar("\n"); // 末尾自动换行

    return count; // 以输出的字符数为返回值 不包括自动添加的换行符
}