#include <stdio.h>
#define COVERAGE 350 // 每桶油漆可以刷的单位面积

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE; // 整数除法的结果只保留整数部分
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
        /* 如果面积可以被每桶油漆的面积整除 则说明没有余数 cans不变
           如果不能被整除 说明cans是被截断的整数结果 cans加一 */
        printf("You need %d %s to paint.\n", cans, cans == 1 ? "can" : "cans");
        // cans的值为1 使用单数形式字符 如果大于1则使用复数形式
        printf("Enter next value (q to quit): ");
    }

    return 0;
}