#include <stdio.h>

int main(void)
{
    char ch;
    printf("Please enter a character: ");
    scanf("%c", &ch);
    printf("The code for %c is %d", ch, ch);
    // %c 告知printf以对应字符形式打印 输出输入的字符
    // %d 告知printf以整数的十进制形式打印 输入输入的字符在内存中的二进制位组合的十进制值
    // 转换说明决定数据的显示方式 而不是存储方式

    /* 例如输入了C 在内存中则存储为01000011
       这一个字节的二进制数若根据%d转换为十进制显示为67
       如果根据%c映射为ASCII字符则显示C */
    
    return 0;
}