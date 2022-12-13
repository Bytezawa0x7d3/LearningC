#include <stdio.h>

int main(void)
{
    for (int secs = 5; secs > 0; secs--)
        // 在每次循环结束时用递减运算递减计数器
        printf("%d seconds!\n", secs);
    printf("We have ignition!");

    return 0;
}