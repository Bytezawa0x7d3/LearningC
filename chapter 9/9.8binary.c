#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;

    printf("Enter an integer (q to quit): ");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit): ");
    }
    printf("Done.");

    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2; // 先算出了最后一位
    if (n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1'); 
    // 用条件运算符将整数转换为字符输出
    // 最后一位在递归调用之后输出 利用递归函数倒序的特性
    // 如果使用循环需要将值逐个暂时存储后调整顺序再输出 

    return;
}