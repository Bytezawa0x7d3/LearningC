#include <stdio.h>

int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    // 十六进制字母小写 字母大写 字母小写并显示0x前缀
    printf("**%d**% d**% d**\n", 42, 42, -42);
    // 十进制整数默认宽度 前导空格 前导空格
    printf("**%5d**%5.3d**%05d**%05.3d**", 6, 6, 6, 6);
    // 整数宽度为5 宽度5精度3 宽度5以0填充 宽度5精度3以0填充（如果以0填充修饰符和精度一起出现0会被忽略）
    // 给整数精度修饰符示例 数值为6 精度为3 输出006
    
    return 0;
}