#include <stdio.h>

int main(void)
{
    int num = 1;
    while (num < 21)
    {
        printf("%4d %6d\n", num, num * num); // 输出num和num的平方的值
        num = num + 1; // 每次循环num自增1 直至num增至21
    }

    return 0;
}