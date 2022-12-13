#include <stdio.h>

int main(void)
{
    for (int n = 2; n < 60; n = n + 13)
        // 可以让计数器从其他数值开始 每次递增更多值
        // 本例从2开始 每次循环结束递增13
        printf("n = %d\n", n);
    
    return 0;
}