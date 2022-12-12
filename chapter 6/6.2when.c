#include <stdio.h>

int main(void)
{
    int n = 5;

    while (n < 7)
    {
        printf("n = %d\n", n);
        n++;
        /* 第二次执行到这行 n的值等于7 已经不满足测试条件
           但是程序不会马上结束该循环 而是执行完所有循环体内的语句
           再次判断测试条件时 才结束循环 向下进行 */
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");

    return 0;
}