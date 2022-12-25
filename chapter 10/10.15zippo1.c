#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

    // 数组名为其首个元素的地址
    printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);

    // 第一个内层数组的首元素地址
    printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
    /* zippo的值为其第一个元素的地址 这个元素是有两个整数元素的数组
       zippo[0]的值是内层数组中第一个整数的地址
       这个整数和这个内层数组都开始于同一个地址
       所以zippo和zippo[0]的值相同*/

    // 外层数组的首个元素的值 即第一个内层数组的首元素地址
    printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);

    // 内层数组的第一个元素是一个整数
    printf("zippo[0][0] = %d\n", zippo[0][0]);

    // 根据内层数组的值 即其第一个元素的地址 找到第一个整数
    printf("*zippo[0] = %d\n", *zippo[0]);

    // 双重间接
    printf("**zippo = %d\n", **zippo);

    // 数组表示法
    printf("zippo[2][1] = %d\n", zippo[2][1]);

    // 指针表示法
    printf("*(*(zippo + 2) + 1) = %d", *(*(zippo + 2) + 1));

    return 0;
}