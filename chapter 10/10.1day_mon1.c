#include <stdio.h>
#define MONTHS 12 // 一年的月份数量创建为符号常量

int main(void)
{
    // 使用ANSI C标准新增的方式声明并初始化数组
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days.\n", index + 1, days[index]);

    return 0;
}