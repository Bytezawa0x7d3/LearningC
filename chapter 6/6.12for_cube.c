#include <stdio.h>

int main(void)
{
    int num;

    printf("    n   n cubed\n");
    for (num = 1; num <= 6; num++) printf("%5d %5d\n", num, num*num*num);
    /* 首次执行时初始化num为1
       每次循环开始判断num是否小于等于6 真则执行循环体 假则结束循环
       每次循环结束num自增1 */

    return 0;
}