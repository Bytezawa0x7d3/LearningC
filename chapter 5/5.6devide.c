#include <stdio.h>

int main(void)
{
    printf("Integer division: 5 / 4 = %d\n", 5 / 4); // 1
    printf("Integer division: 7 / 4 = %d\n", 7 / 4); // 1
    // 整数除法的结果的小数部分 会被直接丢弃 而不是四舍五入

    printf("Integer division: 6 / 3 = %d\n", 6 / 3); // 2
    // 结果如果正好是整数 则会得到正确的结果

    printf("Floating division: 7.0 / 4.0 = %1.2f\n", 7.0 / 4.0); // 1.75
    // 浮点数相除的结果为浮点数

    printf("Mixed division: 7.0 / 4 = %1.2f\n", 7.0 / 4); // 1.75
    /* 计算机将整数项先转换为浮点数后再进行运算
       所以混合运算实质上还是浮点数运算
       最终结果仍是浮点数 */

    return 0;
}