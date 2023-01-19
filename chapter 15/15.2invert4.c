#include <stdio.h>
#include <limits.h>

char * itobs(int, char *);
void show_bstr(const char *);
int invert_end(int num, int bits);


int main(void)
{
    int number;
    char binstr[CHAR_BIT * sizeof(int) + 1];

    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");
    printf("Enter a number: ");
    while (scanf("%d", &number) == 1)
    {
        itobs(number, binstr);
        printf("%d is ", number);
        show_bstr(binstr);
        putchar('\n');
        number = invert_end(number, 4);
        printf("Inverting the last 4 bits gives\n");
        show_bstr(itobs(number, binstr));
        printf("\nEnter again: ");
    }
    puts("Bye.");

    return 0;
}


char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (1 & n) + '0';
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

int invert_end(int num, int bits)
{
    int mask = 0b00000000;
    int bitval = 0b00000001;

    while (bits-- > 0)
    // 根据bits的值 循环指定次数
    {
        mask |= bitval;
        bitval <<= 1;
        // 第一次循环 mask为0b00000001 之后bitval设为0b00000010
        // 第二次循环 mask |= bitval 即 mask = 0b00000001 | 0b00000010
        // 结果为 0b00000011
        // 循环n次后 mask从最右侧到第n位 都被设为1
    }

    return num ^ mask; // 使用异或运算符 mask为1的位 将被反转
}