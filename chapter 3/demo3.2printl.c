#include <stdio.h>

int main(void)
{
    // 初始化两个变量
    int ten = 10;
    int two = 2;
    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - 2);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten); // 此处故意遗漏两个参数

    /*
    因为有参数遗漏，运行时会打印内存中的任意值
    每次可能不同，因为内存中存储的数据不同，编译器管理内存的位置也不同
    */
    
    return 0;
}

/*
%d，即转换说明
指明在一行中打印整数的位置，指定printf()应用什么格式打印一个值
每一个%d都与变量列表中相应的int值匹配
可以是int变量、int常量、值为int的表达式
*/

/*
需要确保转换说明的数量与待打印值得数量相同
编译器不捕获此处发生的数量不同的错误
因为printf不同于其他函数 它接受任意数量的参数
编译器也无法确定转换说明和待打印值能否一一对应
*/