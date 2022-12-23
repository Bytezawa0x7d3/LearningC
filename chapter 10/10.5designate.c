#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    /* 指定初始化器后面如果有更多值 后面的这些值将被用于初始化指定元素后面的元素
       [4] = 31 使用指定初始化器初始化第五个元素为31
       它后面的30和31将被用来初始化第六和第七个元素
       如果初始化了已经被初始化的元素 最初的值将被取代 */
    int i;

    for (i = 0; i < MONTHS; i++)
        printf("%2d %d\n", i + 1, days[i]);

    return 0;
}