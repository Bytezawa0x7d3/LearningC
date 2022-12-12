#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be sumed (q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1)
    /* 测试条件处本应是相等运算符== 被改为赋值运算符=
       此处意为给status变量赋值1 赋值表达式的结果为左值最终的结果
       所以此处测试条件永远为1 构成了无限循环 */
    {
        sum = sum + num;
        printf("Please enter the next integer (q to quit): ");
        status = scanf("%ld", &num);
        /* 此处如果输入q 会发生读取失败
           scanf会将读取失败的值留给下一个scanf
           所以下一次循环的scanf会直接发生读取失败 
           形成无限且出错的循环 */
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}