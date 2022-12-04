#include <stdio.h>

int main(void)
{
    printf("Here is a way to print a "); // 使用多个printf打印长字符串
    printf("long string.\n");
    printf("Here is another way to print a \
long string\n"); // 使用\进行字符串内换行 换行后不要有缩进 否则缩进的4个空格会被算入字符串
    printf("Here is the newest way to print a "
    "long string.\n"); // 较新的C编译器会将多个字符串自动连接 因此将字符串一分为二并在分割处换行

    /* 直接在字符串内出现真的换行符 会被编译器视为不合法字符
       字符串允许用转义字符\n表示输出时的换行 但不能包括真的换行符 */

    return 0;
}