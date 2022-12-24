#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %d days.\n",
                index + 1, *(days + index));
        /* *(days + index) 同等与 days[index]
           days为该数组首个元素的地址
           此地址加一个整数 地址增加到下一个存储单元的地址
           即days数组中下一个元素的地址
           使用解引用运算符获得该元素的值*/
        // 两种写法的机器码相同 没有速度优势

    return 0;
}