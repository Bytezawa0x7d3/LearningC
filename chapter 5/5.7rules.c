#include <stdio.h>

int main(void)
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    /* -(2 + 5) * 6 + (4 + 3 * (2 + 3))
       = -7 * 6 + (4 + 3 * 5) 先算括号内的部分
       = -7 * 6 + (4 + 15)  再算括号内乘法
       = -7 * 6 + 19 再算括号外乘法
       = -42 + 19 最后算加法
       = -23 此值先赋给score 再赋给top 因为赋值运算结合律是从右向左运算 */

    printf("top = %d, score = %d\n", top, score);

    return 0;
}