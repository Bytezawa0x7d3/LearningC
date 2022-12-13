#include <stdio.h>

int main(void)
{
    for (char ch = 'a'; ch <= 'z'; ch++)
        // 可以使计数变量为字符类型 代替数字
        // 从字符a开始 每次循环结束将a的码值递增1
        printf("The ASCII value for character %c is %d\n", ch, ch);
    
    return 0;
}