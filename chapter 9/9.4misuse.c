#include <stdio.h>

int imax();
// 使用旧式函数原型 导致编译器无法察觉传参异常

int main(void)
{   
    // 主调函数根据实际参数决定向栈中放入的数据类型
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    /* 主调函数向imax传入两个double类型的值
       即向栈中放入两个宽度为64位的值 一共128位
       但是imax获得实参时读取的宽度是根据函数定义处形参的类型的
       int类型宽度为32 两个int则是64
       imax将栈中前64为作为两个int读取并赋值给局部变量n和m 导致异常的结果 */
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    /* 接受两个参数的imax只得到一个参数
       imax能成功读取到第一个整数参数
       但是读取的第二个整数参数是栈中的其他值
       因为主调函数没有提供 */

    return 0;
}

int imax(n, m)
int n, m;
{
    // 函数本身根据形参类型从栈中读取参数
    return (n > m ? n : m);
}