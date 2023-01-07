#include "12.12diceroll.h"
#include <stdio.h>
#include <stdlib.h> // 提供rand()函数原型

int roll_count = 0; // 外部链接静态变量 整个程序可共享 全程存在

static int rollem(int sides) // 静态函数原型 该文件内私有 其他文件中不可见
{
    roll_count++;

    return rand() % sides + 1; // 根据面数返回合适的伪随机数
}

int roll_n_dice(int dice, int sides) // 隐性定义为外部函数 整个文件可共享
{
    int d;
    int total = 0;

    if (sides < 2)
    {
        // 电子骰子至少要有两面
        printf("Need at least two sides.\n");
        return -2;
    }
    if (dice < 1)
    {   
        // 至少掷一次
        printf("Need at least one die.\n");
        return -1;
    }

    for (d = 0; d < dice; d++)
        // 掷指定次数 记录结果总和
        total += rollem(sides); // rollem()只在该函数内调用

    return total;
}
