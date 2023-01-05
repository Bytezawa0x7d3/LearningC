#include <stdio.h>

extern int count; // 引用式声明 该文件中使用其他翻译单元中定义的变量
static int total = 0; // 静态内部链接

void accumulate(int k); // 没有调用语句 函数原型可选

void accumulate(int k)
{
    /* 该函数被多次调用 每次调用结束 其块作用变量都被释放
       但subtotal和total都是静态变量 全程存在 每次调用可以获得上次的值 */
    static int subtotal = 0; // 静态无连接

    if (k <= 0)
    {
        printf("loop cycle %d\n", count);
        printf("subtotal: %d, total: %d\n", subtotal, total);
        subtotal = 0; // 下一次开始之前清零
    }
    else
    {
        subtotal += k; // 用来统计每次累加的数
        total += k; // 用来统计一共累加的数
    }
}