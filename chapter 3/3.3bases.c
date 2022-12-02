#include <stdio.h>

int main(void)
{
    int x = 100;

    printf("dec = %d, octal = %o, hex = %x\n", x, x, x);
    printf("dec = %d, octal = %#o, hex = %#x\n", x, x, x);

    return 0;
}

/*
转换说明汇总：
%d 十进制表示整数
%o 八进制表示整数
%#o 八进制表示整数 带前缀“0”
%x 十六进制表示整数
%#x 十六进制表示整数 带前缀“0x”
*/