#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter 3 integers:\n");
    scanf("%*d %*d %d", &n);
    /* scanf的*用于将所在的转换说明用于占位 
       此处前两个%*d用于忽略输入的前两个十进制整数 只保留最后一个
       此功能在读取特定位置的内容时十分有用 */
    printf("The last integer was: %d", n);

    return 0;
}