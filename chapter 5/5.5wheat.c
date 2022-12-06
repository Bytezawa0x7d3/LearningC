#include <stdio.h>
#define SQUARES 64

int main(void)
{
    const double CROP = 2E16;
    double current, total;
    int count = 1;

    printf("square    grains       total        fraction of\n");
    printf("          added        grains       world total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current; // 循环中对变量进行乘法运算 实现指数增长
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    }
    printf("That's all.\n");

}