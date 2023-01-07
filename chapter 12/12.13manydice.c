#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12.12diceroll.h" // 本地头文件

int main(void)
{
    int dice, roll;
    int sides;
    int status;

    srand((unsigned int) time(0)); // 使用强制类型转换运算符 将time()返回值转为适当类型
    printf("Enter the number of sides per die (0 to stop): ");
    while (scanf("%d", &sides) == 1 && sides > 0) // 获得面数 读取失败或读到0退出
    // 输入类型不匹配 sides不是正数 都会导致退出
    {
        printf("How many dice: ");
        if (status = scanf("%d", &dice) != 1) // 获得次数
        {
            if (status == EOF)
                break; // 读到EOF时退出
            else
            {
                // 读取失败 提示重新输入 回到循环开始
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while (getchar() != '\n')
                    continue; // 处理读取失败后剩余的字符
                printf("Enter the number of sides per die (0 to stop): ");
                continue;
            }
        }
        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sided dice.\n",
                roll, dice, sides);
        printf("\nHow many sides (enter 0 to stop): ");
    }
    printf("The rollem() function was called %d times.\n", roll_count); // 访问外部变量
    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}