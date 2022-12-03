#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",
            strlen(name), sizeof name); // 可以在参数之间断为两行
    printf("The phrase of praise has %zd letters ",
            strlen(PRAISE)); // 可以将一句话分给两个printf进行输出 中间不加换行符可以打印在一起
    printf("and occupies %zd memory cells.", sizeof PRAISE);

    return 0;
}

/*
strlen(name) 会给出字符数组中所存储的字符数量
sizeof name 会给出此字符类型数组总共占用的内存单元数量
二者的返回值可能不同
例如 char name[40]; name被赋值为Jack.
此时strlen读取到此数组中存有Jack四个字符 则返回4
但sizeof读取到name数组被分配40字节的内存空间 则返回40

对于常量PRAISE有31个字母
strlen(PRAISE) 返回31 意为字母有31个
sizeof PRAISE 返回32 因为此数组还有末尾的空字符\0多占一个字节 意为占用32字节

sizeof name; 未使用圆括号
strlen(name); 使用圆括号
运算对象是类型时 圆括号必不可少 比如 sizeof(char); sizeof(int);
运算对象是变量或常量时 圆括号可有可无 比如 sizeof(6.28); sizeof name;
但建议所有情况下统一使用圆括号
*/