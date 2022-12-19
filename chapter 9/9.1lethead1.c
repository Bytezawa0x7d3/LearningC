#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void); // 函数原型

int main(void)
{
    starbar(); // 函数调用
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar(); // 没有参数没有返回值 不需要与主调程序通信

    return 0;
}

void starbar(void) // 函数定义
{
    int count; // 局部变量

    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}