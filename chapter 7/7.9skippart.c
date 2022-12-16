#include <stdio.h>

int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score (q to quit):\n");
    while (scanf("%f", &score) == 1)
    // 只有成功读取到数据才进入循环内
    {
        if (score < MIN || score > MAX)
        // 对于超过可接受区间的数据进行跳过
        {
            printf("%0.1f is an invalid value. Try again:\n");
            continue; // 回到循环顶部再次读取
            /* 可以通过if else省略continue
               具体为将二分支的两个条件设为在区间内和不在区间内
               不在区间内打印警告后循环体结束 自动回到顶部
               或者通过将整个循环体设为if内的语句
               if条件为分数在区间内 遇到不在区间内的数据整个循环体不会执行
               但缺点是增加了一层缩进 降低代码可读性
               此时推荐保留continue 使程序过程更明了 */
        }
        printf("Accepting %0.1f.\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;
    }
    if (n > 0)
    {
        printf("Average of %d scores is %0.1f.\n", n, total / n);
        printf("Low = %0.1f, high = %0.1f", min, max);
    }
    else
        printf("No valid scores were entered.\n");
    
    return 0;
}