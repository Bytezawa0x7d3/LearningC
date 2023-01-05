#include <stdio.h>

int main(void)
{
    int n = 8;

    printf("Initially, n = %d at %p\n", n, &n); // main()中的n
    for (int n = 1; n < 3; n++) // for循环头中的n 覆盖了main()的n
        printf("loop 1: n = %d at %p\n", n, &n); // 访问的for循环头中的n
    printf("After loop 1, n = %d at %p\n", n, &n); // for的n被释放 main()的n重新可见
    for (int n = 1; n < 3; n++) // 循环头中的n 在每次迭代的块内可见 覆盖main()的n
    {
        printf("loop 2 index n = %d at %p\n", n, &n); // 访问循环头中的n
        int n = 6; // 循环体中的n 覆盖了循环头中的n 
        printf("    loop 2: n = %d at %p\n", n, &n); // 访问循环体中的n
        n++; // 循环体中的n 在每次迭代结束被释放 但循环头中的n全程存在
    } // 下次条件测试 由于循环体中的n被释放 循环头的n重新可见 参与测试条件的关系表达式
    printf("After loop 2, n = %d at %p\n", n, &n); // for结束 main()的n重新可见
    // 不鼓励在一个块中使用同名变量 会降低可读性

    return 0;
}