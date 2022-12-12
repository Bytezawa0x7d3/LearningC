#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n++ < 3); // while循环后没有其他语句 直接加了分号
        printf("n is %d\n", n); // 此时printf不属于while循环体 只执行了一次
    printf("That is all the program does.");

    /* while循环后直接加分号 循环体就是一个空语句
       每次循环什么都不做 只重复计算和判断测试条件
       有时会在程序中故意使用带空语句的while循环
       因为所有工作都在while的测试条件中完成了 */

    return 0;
}

/* while (scanf("%d", &num) = 1)
   ;

   使用while加空语句的形式 跳过了空白和数字 */