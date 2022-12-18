#include <stdio.h>

int main(void)
{
    int ch;
    /* 用于存储字符的变量被定义为int类型
       因为如果EOF为-1而当前系统的char类型默认无符号
       则char类型的ch就不能存储EOF 使用int类型更规范
       并且getchar()返回int类型的值 如果赋给char可能警告丢失数据 */

    while ((ch = getchar()) != EOF) // windows系统使用\n加上Ctrl+Z作为EOF
    /* 使用EOF时不必通过#define定义EOF的值为-1 在stdio.h中已经定义过了
       EOF的实际值可能由系统而定 但不必在意 当前系统的编译器的stdio.h中已经定义为对应的值 */
        putchar(ch);
        /* putchar()接受int类型的变量
           输出时将多余部分截断处理
           剩余部分视作当前字符集码值 按照对应字符输出 */

    /* 该程序的输入和输出流还可以作为文件
       以实现将输入内容存储到文件
       将文件内容输出到终端
       将一个文件的内容输出到另一个文件实现文件复制  */

    return 0;
}