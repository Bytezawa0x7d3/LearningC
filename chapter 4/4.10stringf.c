#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    // 最小宽度为2 超出最小宽度以实际宽度显示
    // [Authentic imitation!]

    printf("[%24s]\n", BLURB);
    // 最小宽度24 不够最小宽度 以空格填充
    // [    Authentic imitation!]

    printf("[%24.5s]\n", BLURB);
    // 最小宽度24 精度5 字符串指定精度即固定显示位数
    // [                   Authe]

    printf("[%-24.5s]\n", BLURB);
    // 最小宽度24 精度5 左对齐
    // [Authe                   ]

    return 0;
}