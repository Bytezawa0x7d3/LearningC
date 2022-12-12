#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be sumed (q to quit): ");
    input_is_good = (scanf("%ld", &num) == 1); // 将相等表达式的值赋给布尔类型变量
    while (input_is_good) // 布尔变量被用来当作测试条件
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld", sum);

    return 0;
}