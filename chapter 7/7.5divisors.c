#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num; // 待测试的数
    unsigned long div; // 可能的约数
    bool isPrime; // 是否为素数的标记
    /* stdbool.h中为_Bool指定别名bool
       并定义常量 true表示真 false表示假
       可以将此提供给循环的测试条件或者if的表达式部分 */

    printf("Please enter an integer for analysis (q to quit): ");
    while (scanf("%lu", &num) == 1)
    // 成功读取到数字才执行程序 否则退出
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        /* 将可能的约数的范围设为[2, num]会降低效率
           假设144可以被2和74整除
           那div为2时 可以一次获得两个约数 2和144/2即72
           144的约数成对出现规律如下
           (2,72) (3,48) (4,36) (6,24) (8,18) (9,16) (12,12) (16,9) (18,8) ...
           可以注意到在(12,12)之后开始出现重复内容
           因此对于144来说不用从[2, 143]逐个测试 只需要测试[2, 12]之间的数即可
           实际上 对于任何数num 只需要检测[2, num^(1/2)]即可
           所以测试条件对于144来说 div为13时会停止分析 
           对于其他数 div超过其平方根时停止分析 
           计算div的平方而不是num的平方根是因为乘法运算比求平方根运算更快 */
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                    // 如果推断出的两个约数不相等便分别显示
                    printf("%lu is divisible by %lu and %lu.\n",
                            num, div, num / div);
                else
                    // 如果推断出的两个约数相等便只显示一个
                    printf("%lu is divisible by %lu.\n",
                            num, div);
                isPrime = false; // 发现约数时标记此数为非素数
            }
        }
        if (isPrime)
            printf("%lu is prime.\n", num);
        printf("Please enter another integer for analysis (q to quit): ");
    }
    printf("Bye.");

    return 0;
}