#include <stdio.h>

void interchange(int u, int v);

int main(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);
    
    return 0;
}

void interchange(int u, int v)
{
    int temp;
    
    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u, u = v, v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
    /* 该被调函数中的u和v的值成功交换
       但是不能影响到主调函数
       因为各函数都有自己的局部变量 互不影响 */
}