#include <stdio.h>

int main(void)
{
    int num = 0;

    for (printf("Keep entering numbers!\n"); num != 6;)
        // 第一个初始化表达式不一定必须用于给变量赋值
        // 此处使用printf函数作为初始化表达式 全程只执行一次
        scanf("%d", &num);
    printf("That is the one I want!\n");

    return 0;
}

/*

循环体中的行为还可以改变循环头中的表达式
for (n = 1; n < 10000; n = n + delta)
对于上方的循环头部分
循环体中可以通过改变delta来修改循环头中的更新部分表达式

*/