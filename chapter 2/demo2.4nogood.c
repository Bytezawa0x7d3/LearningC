#include <stdio.h>

/*
int main(void)
{
    int n, int n2, int n3; 声明语法错误
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    /* 该程序有多处错误       注释错误 无结束符号
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3) 语法错误 没有分号
    //                             语意错误 实际为n2^2 不是n^3
    return 0;
}
*/
 
// 无错误版本
int main(void)
{
    int n;
    int n2;
    int n3;

    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n2 squared = %d\n", n, n2, n3);

    return 0;
}

/*
语法错误
有些语句未按照编程语言的固定格式书写
编译器能检查出语法错误
通常编译器报错的位置比真实的错误位置滞后一行
比如在编译下一行时才发现因为上一行缺少分号导致的错误
*/

/*
语义错误
语义错误不会干扰程序的运行
因为有语义错误不代表语法出错
而是想要表达的意思上存在逻辑错误
编译器不知道人类的意图 所以无法检测出语义错误
比如n3为(n^2)^2=n^4 但printf中的字符的意思是n^3
这与我们期望的输出不符 但对编译器来说没任何毛病
*/

/*
对于语义错误 可以使用调试器debugger去监测关键位置的程序状态program state
*/
