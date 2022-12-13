#include <stdio.h>

int main(void)
{
    int t_ct; // 数列的项的个数
    double time, power_of_2; // 多项式的和 作为分母的2^n
    int limit; // 用来限制for循环次数的变量

    /* S = 1/1 + 1/2 + 1/4 + 1/8 + ... + 1/2^n */

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for(time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
    {
        time += 1.0 / power_of_2; // 每次对总和多加一个项的值
        printf("time = %f when terms = %d\n", time, t_ct);
    }

    return 0;
}

/* 

等式一
S = 1 + 1/2 + 1/4 + 1/8 + ...

等式两侧除二得等式二
S/2 = 1/2 + 1/4 + 1/8 + 1/16 + ...

等式一减等式二
S/2 = 1
S = 2

由此得出当等式一的项按规律变得无穷多时
S的值 也就是各项的总和 无穷接近于2

*/