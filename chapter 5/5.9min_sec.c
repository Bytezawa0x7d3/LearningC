#include <stdio.h>
#define SEC_PER_MIN 60

int main(void)
{
    int sec, min, left;
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter a number of seconds (<= 0 to quit): ");
    scanf("%d", &sec);
    while (sec > 0) // 只要sec为正数 就再执行一次循环
    {
        min = sec / SEC_PER_MIN; // 整数除法结果被截断处理 只保留整数部分
        left = sec % SEC_PER_MIN; // 余数部分通过求模运算符得出
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<= 0 to quit): ");
        scanf("%d", &sec); // sec是否为正数 取决于用户的输入 以便根据输入控制是否退出
    }

    return 0;
}