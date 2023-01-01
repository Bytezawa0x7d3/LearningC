#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int i, times;

    if (argc < 2 || (times = atoi(argv[1])) < 1)
        /* 如果用户没有提供命令行参数 argc为1 小于2 第一个子表达式为真
           如果用户提供了负数 第二个子表达式为真
           两种情况满足一个就会进行错误提示
           只要有第二个参数 times就会被赋值
           如果第一个子表达式不满足
           程序进行短路运算 不会对第二个子表达式求值 */
        printf("Usage: %s positive-number\n", argv[0]);
    else
        for (i = 0; i < times; i++)
            puts("Hello, good looking!");
    
    return 0;
}