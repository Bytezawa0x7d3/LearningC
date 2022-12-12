#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++)
    /* for循环的圆括号中需三个表达式 用两个分号隔开
       1. 初始化 只在循环第一次开始时执行一次
       2. 测试条件 在每次开始循环时求值 若表达式为假 循环结束
       3. 表达式执行更新 在每次循环结束时求值
       这三条统称控制表达式 每一个表达式的副作用发生在对下一个表达式求值之前*/
        printf("Be my Valentine!\n");
    
    return 0;
}