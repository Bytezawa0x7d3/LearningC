#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];
    
    printf("What is your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    /* 使用%s作为字符串的转换说明 它告诉相关输入输出函数接受或打印字符数组
       所以不必人为添加空字符在字符串末尾 scanf自动完成此工作
       scanf在读到第一个空格时就停止读取
       所以输入带空格的名字 程序只会读入空格之前的字符*/

    return 0;
}