#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++; // 后缀递增 使用a的值之后 a递增
    pre_b = ++b; // 前缀递增 b先递增 再使用b的值
    printf("a = %d\na_post = %d\nb = %d\npre_b = %d",
           a, a_post, b, pre_b);
    
    return 0;
}