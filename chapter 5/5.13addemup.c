#include <stdio.h>

int main(void)
{
    int count, sum;
    // C语言标准规定声明不算语句
    // 去掉分号后剩下的部分不是表达式 也没有值

    count = 0; // 包含赋值运算符的表达式语句
    sum = 0; // 赋值表达式为变量分配一个值 变量名+等号+表达式+分号
    while (count++ < 20) // while迭代语句 圆括号中的是测试条件
    {
        sum = sum + count;
    }
    printf("sum = %d", sum);
    // 函数表达式语句引起函数调用

    return 0;
}