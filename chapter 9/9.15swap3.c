#include <stdio.h>

void interchange(int * u, int * v);
// 接受两个指针变量 声明时的形参为两个指向int类型变量的指针
// 也可以使用在函数原型处省略形参名的写法
// void interchange (int *, int *);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y); // 传递指向x和y的指针给被调函数
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int * u, int * v)
{
    int temp;

    temp = *u; // 找出u指向的值并赋给temp
    *u = *v; // 将v指向的值赋给u指向的变量
    *v = temp; // 将temp的值赋给v指向的变量
    /* 将待互换值的两个变量的地址给该函数
       该函数通过地址访问这两个变量
       使用指针和解引用运算符
       该函数可以访问存储在指针指向位置的值并改变他们 */
}