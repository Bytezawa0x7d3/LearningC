#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    printf("Shoe size (men's)    foot length\n");
    shoe = 3.0;
    while (shoe < 18.5)
    // 程序检查括号内条件是否为真 若成立则执行下方花括号内语句块
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
        // 语句块执行完毕后回到此处顶部 判断条件是否满足 不满足则跳出该语句块向下执行
    }
    // shoe 的值为19时不满足while条件 执行while语句块后的print和return表达式 随后程序结束
    printf("If the shoe fits, wear it.\n");

    return 0;
}