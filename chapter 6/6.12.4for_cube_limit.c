#include <stdio.h>

int main(void)
{
    int num;

    printf("    n   n cubed\n");
    for (num = 1; num*num*num <= 216; num++)
        // 修改了 6.12.0for_cube.c 的测试条件
        // 原条件 num < 6 适合限制循环次数
        // 现在的条件 num*num*num <= 216 适合限制输出的立方值的大小
        printf("%5d %5d\n", num, num*num*num);

    return 0;
}