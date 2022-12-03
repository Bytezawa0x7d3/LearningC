#include <stdio.h>
#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES); // 十进制整数转换说明 不带任何修饰符 按原宽度输出
    printf("*%2d*\n", PAGES); // 带数字说明符 宽度为2 因为整数宽度为3大于2 系统自动按3输出
    printf("*%10d*\n", PAGES); // 宽度为10 默认右对齐输出
    printf("*%-10d*\n", PAGES); // 宽度为10 采用-修饰符 左对齐输出

    return 0;
}