#include <stdio.h>

int main()
{
    int x = 30; // 外层块中声明自动类型变量
    
    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77; 
        // 内层块中的同名变量 隐藏了外层的变量
        // 虽同名 但是地址不同 是两个变量
        printf("x in inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x); // 外层块中的变量重新可见
    while (x++ < 33) // 测试条件中使用的x是最外层的
    {
        int x = 100; // 此处定义了内层块中的x 隐藏了外层的
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
        // 每次循环结束 内层变量的内存都被释放 就像离开了块一样
    }
    printf("x in outer block: %d at %p\n", x, &x);

    return 0;
}