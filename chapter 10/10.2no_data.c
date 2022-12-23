#include <stdio.h>
#define SIZE 4

int main(void)
{
    int no_data[SIZE];
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        // 访问数组之前不初始化 会读取到最初留存在内存上的值 内容不能确定
        // 所以在访问数组之前务必初始化数组
        printf("%2d%14d\n", i, no_data[i]);
    
    return 0;
}