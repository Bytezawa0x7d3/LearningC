#include <stdio.h>
#define RATE1 0.13230 // 0-360kwh的费率
#define RATE2 0.15040 // 361-468kwh的费率
#define RATE3 0.30025 // 469-720kwh的费率
#define RATE4 0.34025 // 720kwh以上的费率
#define BREAK1 360.0 // 第一个费率变化节点
#define BREAK2 468.0 // 第二个费率变化节点
#define BREAK3 720.0 // 第三个费率变化节点
#define BASE1 (RATE1 * BREAK1) // 使用360kwh的费用
#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1)) // 使用468kwh的费用
#define BASE3 (BASE2 + RATE3 * (BREAK3 - BREAK2)) // 使用720kwh的费用

/* 在程序顶部定义所有常量的好处是
   如果要修改费率和费率变化节点
   只需修改常量的值
   随后程序中后续出现的对应字符
   会被预处理器自动批量替换成修改后的字符
   对于算式 编译器提前求值
   以便最终代码使用的是数值而不是计算式 */

int main(void)
{
    double kwh;
    double bill;

    printf("Please enter the kwh used: ");
    scanf("%lf", &kwh);
    // 程序根据输入的用电量所在的区间 自动选择对应的计算式
    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh <= BREAK2)
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else if (kwh <= BREAK3)
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    else
        bill = BASE3 + (RATE4 * (kwh - BREAK3));
    /*
    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else 
        if (kwh <= BREAK2)
            bill = BASE1 + (RATE2 * (kwh - BREAK1));
        else 
            if (kwh <= BREAK3)
                bill = BASE2 + (RATE3 * (kwh - BREAK2));
            else
                bill = BASE3 + (RATE4 * (kwh - BREAK3));
    else if 并不是新的关键字
    只是将二分支结构拼成多分支结构的写法
    以上代码块通过缩进演示了else if的本质还是if else
    */
    printf("The charge for %.1f kwh is $%1.2f.", kwh, bill);

    return 0;
}