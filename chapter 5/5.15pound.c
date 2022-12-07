#include <stdio.h>

void pound(int n); // 函数原型声明
/* 早期函数声明可以不用指定形参 formal argument 的类型
   现在要求在函数原型提供返回值类型 函数名 形参名及其类型 */

int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;

    pound(times);
    pound(ch);
    /* int类型形参接收到其他类型实参 会自动转换为int类型
       '!'的位组合是宽度为1字节的33
       如果系统int宽度为4字节 此处'!'被转换为宽度为4字节的int类型的33 */
    pound(f);
    /* 浮点数类型的6.0会被截断为6 以转型为int提供给pound */

    return 0;
}

void pound(int n)
{
    while (n-- > 0) printf("#");
    printf("\n");
    /* 变量名是函数私有的 
       在main中定义名为n的变量不会与此处的n冲突 */
}