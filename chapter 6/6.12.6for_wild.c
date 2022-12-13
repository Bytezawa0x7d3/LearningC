#include <stdio.h>

int main(void)
{
    int x;
    int y = 55;

    printf("         x          y\n");
    for (x = 1; y <= 75; y = (++x * 5) + 50)
        // for循环的更新部分可以是任何合法的表达式
        // 虽然可以运行 但是风格不好 降低了可读性
        // 为了保证程序清晰易读 不推荐在更新部分加入代数运算
        printf("%10d %10d\n", x, y);
    
    return 0;
}