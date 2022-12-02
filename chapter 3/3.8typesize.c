#include <stdio.h>

int main(void)
{
    // sizeof(type)运算符可以返回type在当前系统中占内存多少字节
    // %zd转换说明用于告知printf待打印内容是sizeof返回的字节数
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));

    return 0;
}