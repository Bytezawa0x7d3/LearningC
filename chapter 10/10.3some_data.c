#include <stdio.h>
#define SIZE 4

int main(void)
{
    int some_data[SIZE] = {1492, 1066};
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, some_data[i]);
        // 初始化时提供的元素数小于数组长度 编译器将多余位置设为0
        // 因此输出的后两个元素为0
    
    return 0;
}