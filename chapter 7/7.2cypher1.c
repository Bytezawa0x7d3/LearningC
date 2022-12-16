#include <stdio.h>
#define SPACE ' '

int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    /* 此处读取和测试分为了两个表达式
       C语言特有的风格支持将两个行为合并成一条表达式
       while (
              (ch = getchar())
                               != '\n')
       以上为包含多个行为的一条表达式的写法 使每个行为更加清晰
       执行测试条件时 需要先执行getchar()函数获得输入字符
       之后由于圆括号 使赋值子表达式先执行 值被赋给ch
       ch的新值为整个赋值表达式的值 被用来与'\n'作不等比较
       如果ch的新值为'\n' 则整个测试条件为假 循环结束
       关系运算符比赋值运算符有更高的优先级
       如果没有圆括号 getchar()读取的字符会优先与'\n'比较
       关系表达式的值为0或1 最后赋给ch 不是期望的结果  */
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
            /* 对字符类型变量进行数学运算
               再一次说明C的字符实际上作为整数存储的
               与int类型做加法运算时 ch被自动升级为int
               运算结果为int 传给了接受int类型参数的putchar
               putchar函数只保留参数的位组合的后8位
               将其解释为对应的字符进行输出 */
        ch = getchar();
    }
    putchar(ch);

    return 0;
}