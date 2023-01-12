#include <stdio.h>
#define FUNDLEN 30

struct funds {
    double bankfund;
    double savefund;
};

double sum(const struct funds money);
// 形参声明为一个结构

int main(void)
{
    struct funds stan = {
        11314.31,
        31141.92
    };

    printf("Stan has a total of $%.2f", sum(stan));
    // 函数调用时直接将结构变量给函数

    return 0;
}

double sum(const struct funds money)
{
    return (money.bankfund + money.savefund);
    // 使用 . 访问传递的结构的成员
}