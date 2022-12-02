#include <stdio.h>

int main(void)
{
    int a = 0;
    int i = 2147483647;
    unsigned int b = 0;
    unsigned int j = 4294967295;
    int c = 0;

    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);
    printf("%d %u %d", a, b, c);

    // i+1和i+2溢出后为-2147483647，-2147483648
    // j+1和j+2溢出后为0，1

    return 0;
}

/*
无符号整数溢出后 会从新的起点开始
有符号整数加法溢出后 会从负数部分向正方向累加

溢出行为时未定义的，编译器不强制视为错误，需要人为注意此问题
以上仅为一个比较有代表性的例子，还有其他各种情况，不一一列出
*/