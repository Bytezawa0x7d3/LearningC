#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num); // 函数原型

int main(void)
{
    int spaces;
    
    show_n_char('*', WIDTH); // 函数调用
    putchar('\n');
    show_n_char(SPACE, 12);
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;

    show_n_char(SPACE, spaces);
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);

    printf("%s\n", PLACE);
    show_n_char('*', WIDTH); // 没有参数没有返回值 不需要与主调程序通信
    putchar('\n');

    return 0;
}

void show_n_char(char ch, int num) // 函数定义
{
    int count; // 局部变量

    for (count = 1; count <= num; count++)
        putchar(ch);
}