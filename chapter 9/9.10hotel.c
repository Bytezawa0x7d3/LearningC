#include <stdio.h>
#include "9.11hotel.h"

// 该文件存储所有函数的定义 函数原型在头文件中

int menu(void)
{
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms         2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza       4) The Stockton\n");
    printf("5) quit");
    printf("\n%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    // 测试条件使用或逻辑运算符 读取失败或读取到超出范围的值都将再次要求输入
    {
        if (status != 1)
            // * 抑制赋值 对于scanf是掠过对应的输入内容
            scanf("%*s");
        printf("Please enter an integer from 1 to 5: ");
    }

    return code;
}

int getnights(void)
{
    int nights;

    printf("How many nights are needed: ");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s");
        printf("Please enter an integer as number of nights needed: "); 
    }

    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
        // 每多过一天 在原价格基础上减少5%
        total += rate * factor;
    printf("The total cost will be $%0.2f.\n", total);
}