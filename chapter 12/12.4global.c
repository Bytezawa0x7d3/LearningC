#include <stdio.h>

int units = 0; // 创建外部变量 外部链接 文件作用域 静态存储期

void critic(void);

int main(void)
{
    extern int units; // 可选的外部变量重复声明

    printf("How many pounds to a firkin of butter: ");
    scanf("%d", &units);
    while (units != 56) // 可以访问外部变量
        critic(); // main函数中可以读到units被修改后的值
    printf("You must have looked it up!");

    return 0;
}

void critic(void)
{
    // 没有使用可选的外部变量声明
    printf("No luck, my friend. Try again: ");
    scanf("%d", &units); // 仍然可以直接访问外部变量
}