#include <stdio.h>

int main(void)
{
    for (float debt = 100.0; debt < 150.0; debt = debt * 1.1)
        // 可以使计数器呈几何增长 而不是每次递增固定值的算术增长
        // 将计数器值初始化为100.0 每次循环结束递增当前值的10%
        printf("Your debt is now $%.2f.\n", debt);

    return 0;
}