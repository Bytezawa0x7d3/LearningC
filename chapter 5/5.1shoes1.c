#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)    foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}

/* 该程序有局限性 未能利用计算机的优势
   此处只能计算9码的鞋子适合的足部尺寸
   人工手算比计算机还要快 使用循环可以改进 */