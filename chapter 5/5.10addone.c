#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0;
    
    while (super < 5)
    {
        super++; // 递增运算符 后缀模式
        ++ultra; // 递增运算符 前缀模式
        printf("super = %d, ultra = %d\n", super, ultra);
    }
    
    return 0;
}

/*

可以使用递增运算符改善之前的计算鞋码程序

int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;
    
    shoe = 2.0;
    printf("      shoe                   foot size\n");
    while (++shoe < 18.5)
    每执行此表达式 shoe都自增1 增至19则结束循环
    相对最初的程序 代码更加紧凑 增加可读性
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %20.1f inches\n", shoe, foot);
    }
    
    return 0;
}

*/