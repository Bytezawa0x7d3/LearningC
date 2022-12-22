#include <stdio.h>

void mikado(int);

int main(void)
{
    int pooh = 2, bah = 5; // main()的局部变量

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    mikado(pooh);
    /* main()的局部变量传递给mikado()时
       mikado()的形式参数bah会被赋pooh的值
       两个函数的参数传递靠值得拷贝完成
       而不是直接将主调函数的变量交给被调函数处理
       形参和实参可能同名
       但是是两个完全不同的变量 占用不同位置的内存 */

    return 0;
}

void mikado(int bah)
{
    int pooh = 10;

    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
    // mikado()的局部变量地址和main()的都不相同 说明都不是同一个变量
}