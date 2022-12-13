#include <stdio.h>

int main(void)
{
    int ans, n;
    ans = 2;
    for (n = 3; ans <= 25;)
        // 可以通过提供空语句 省略for循环的一个或多个表达式
        // 此处省略循环结束更新计数器的表达式
        // 在循环体有更新计数器的语句 也是可以运行的
        // 省略中间的测试条件的表达式 会使测试条件永远为真
        ans = ans * n;
    printf("n = %d\nans = %d", n, ans);

    return 0;
}