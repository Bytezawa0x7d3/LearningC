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
    while (int x = 31, x++ < 33)
    {
        int x = 100;
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);

    return 0;
}