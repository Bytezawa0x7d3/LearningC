#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(double x, double y) {return (x + y);}

int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Saving and Loan",
        8542.94
    };

    printf("Stan has a total of $%.2f", sum(stan.bankfund, stan.savefund));
    // 直接将结构的成员的值 作为实参 其值拷贝给函数创建的形参

    return 0;
}

