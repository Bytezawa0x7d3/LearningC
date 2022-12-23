#include <stdio.h>
#define SIZE 4

int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;
    // 一起声明的变量和数组 内存地址可能也是连续的
    
    printf("value1 = %d, value2 = %d.\n", value1, value2);
    for (i = -1; i < SIZE; i++)
        /* 包含越界的下标 -1
           当前设备使用的编译器 根据下标-1找到的是相邻的变量value2
           所以value2的值被设为2*(-1)+1的值 -1 */
        arr[i] = 2 * i + 1;
    
    for (i = -1; i < 7; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("value1 = %d, value2 = %d.\n", value1, value2);
    printf("Address of arr[-1]: %p\n", &arr[-1]);
    printf("Address of arr[4]: %p\n", &arr[4]);
    printf("Address of value1: %p\n", &value1);
    printf("Address of value2: %p\n", &value2);
    // 根据输出的地址可以看到 arr[-1]的地址就是value2

    return 0;
}