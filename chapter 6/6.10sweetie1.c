#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count = 1; // 初始化 计数器的初始化放在循环外 可能导致忘记初始化

    while (count <= NUMBER) // 测试
    {
        printf("Be my Valentine!\n");
        count++; // 更新 递增发生在结尾 防止遗漏递增
    }

    return 0;
}