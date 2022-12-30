#include <stdio.h>
#define DEF "I am a #define string."

int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "A pointer was initialized to me.";

    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]); // 字符数组的第五个元素的地址 从r开始打印
    puts(str2 + 4); // 指针的加法运算 指向往后移动四个存储单元的位置 从i开始打印

    return 0;
}