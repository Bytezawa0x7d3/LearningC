#include <stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperature.");
    printf("Use Celsius, and enter q to quit:\n");
    while (scanf("%f", &temperature) == 1)
    // 如果测试条件中的scanf读到非数字的值 回返回0 测试条件为假 自动结束循环
    {
        all_days++;
        if (temperature < FREEZING)
            // 如果温度小于0 则让对应计数变量递增1 否则跳过递增语句
            cold_days++;
    }
    if (all_days != 0)
        // 计数器不为0说明输入内容不为空
        printf("%d days total: %.1f%% were below freezing.",
                all_days, 100.0 * (float) cold_days / all_days);
        // 使用强制转型避免整数除法
        // 不用也会产生相同结果 100.0为浮点数 C会自动将cold_days转为浮点数
        // 但使用强制转型会保证兼容性 使用较旧版本编译器也不会有问题
    if (all_days == 0) // 此处可用 else 改写
        printf("No data entered!");
    
    return 0;
}