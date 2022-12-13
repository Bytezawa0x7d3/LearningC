#include <stdio.h>

double power(double n, int p); // 函数原型
// 编译器需要知道函数返回值的类型 才知道有多少字节数据 以及如何解释

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter the number and the positive integer power to\n");
    printf("which the number will be rised (q to quit): ");
    while (scanf("%lf%d", &x, &exp) == 2)
    // 只有成功读取两个指定类型的数 循环体才会执行 否则退出
    {
        xpow = power(x, exp); // 保存次幂结算结果以输出
        printf("%.3g to the power %d is %.5g.\n", x, exp, xpow);
        printf("Enter the next pair of numbers (q to quit): ");
    }
    printf("Hope you enjoy this power trip. Bye.");

    return 0;
}

double power(double n, int p) // 函数定义
{
    double pow = 1;
    int i;
    
    for (i = 1; i <= p; i++)
        pow *= n;
    
    return pow; // 返回计算结果
}