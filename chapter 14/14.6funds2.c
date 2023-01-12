#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds * money) {return (money->bankfund + money->savefund);}
// 使用限定符const 表明函数只是访问结构的成员 不改变其内容
// 像声明结构指针一样声明形参
// 函数内通过 -> 或者 * 解引用指针 访问指向的结构的元素

int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Saving and Loan",
        8542.94
    };

    printf("Stan has a total of $%.2f", sum(&stan));
    // 调用函数时 使用查找地址运算符 将地址赋给函数的形参指针

    return 0;
}