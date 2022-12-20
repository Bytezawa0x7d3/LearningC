#include <stdio.h>

int imax(int, int);

int main(void)
{   
    // 使用了 ANSI C 函数原型后编译器便能检查出参数引起的异常
    /* printf("The maximum of %d and %d is %d.\n",
            3, 5, imax(3)); */
    printf("The maximum of %d and %d is %d.\n",
            3, 5, imax(3, 5));
    // 个数不匹配会报错
    printf("The maximum of %d and %d is %d.\n",
            3, 5, imax(3.0, 5.0));
    // 类型不匹配会在传递时自动转型为形参类型并警告
    
    return 0;
}

int imax(int n, int m)
{
    return (n < m ? m : n);
}