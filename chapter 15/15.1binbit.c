#include <stdio.h>
#include <limits.h>

char * itobs(int, char *);
void show_bstr(const char *);


int main(void)
{
    int number;
    char binstr[CHAR_BIT * sizeof(int) + 1];
    // CHAR_BIT 是一字节的位数 sizeof(int)是int类型的宽度 以字节为单位
    // 方括号中计算int类型的位数 最后+1用于存储空字符

    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");
    printf("Enter a number: ");
    while (scanf("%d", &number) == 1)
    {
        itobs(number, binstr);
        printf("%d is ", number);
        show_bstr(binstr);
        printf("\nEnter again: ");
    }
    puts("Bye.");

    return 0;
}


char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);
    // 计算出int类型的位数 使用静态存储期 避免每次重复计算常量

    for (i = size - 1; i >= 0; i--, n >>= 1)
        // i 是从倒数第二个元素的索引到第一个元素的索引
        ps[i] = (1 & n) + '0';
        // 1作为掩码 位组合是00000001 将n的最低为保留
        // 如果n最低位是1 结果是00000001 用1+'0'即1+0=1
        // 此时字符数组中倒数第二个元素为'1'
        // 最后将n右移1位 使原本2号位的值移动到1号位
        // 此时进行掩码和转换字符串 结果是二号位的值
        // 以此类推 字符数组ps的内容最后 是n的二进制位组合
    ps[size] = '\0';

    return ps;
}

void show_bstr(const char * ps)
{
    int i = 0;

    while (ps[i])
    {
        putchar(ps[i]);
        if (++i % 4 == 0 && ps[i])
            putchar(' ');
    }
}