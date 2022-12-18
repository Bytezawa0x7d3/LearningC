#include <stdio.h>
#include <stdbool.h>

long get_long(void); // 验证输入是一个整数
bool bad_limits(long begin, long end, long low, long high); // 验证设置的范围上下限是否有效
double sum_squares(long a, long b); // 计算[a, b]区间内所有整数的平方和

int main(void)
{
    const long MIN = -10000000L; // 范围下限
    const long MAX = 10000000L;  // 范围上限
    long start; // 用户指定的范围的最小值
    long stop; // 用户指定的范围的最大值
    double answer;

    printf("The program computes the sum of squares of integers in a range.\n");
    printf("The lower bound should not be less than -10000000.\n");
    printf("The upper bound should not be more than 10000000.\n");
    printf("Now enter the two limits (0 for both limits to quit).\n");
    printf("Lower limit: ");
    start = get_long(); // 获取下限
    printf("Upper limit: ");
    stop = get_long(); // 获取上限
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again.\n");
        else
        {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of integers from %ld to %ld is %lg.\n",
                    start, stop, answer);
        }
        printf("Enter another limits again (0 for both limits to quit).\n");
        printf("Lower limit: ");
        start = get_long();
        printf("Upper limit: ");
        stop = get_long();
    }
    printf("Done.");

    return 0;
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    // 读取失败才进入循环
    {
        while ((ch = getchar()) != '\n')
            putchar(ch); // 将输入的不合规内容作为提示
        printf(" is not an integer.\n");
        printf("Please enter an integer value, such as 25, -178 or 3: ");
        // 提示完毕后回到顶部再次读取
    }

    return input; // 读取成功直接返回其值
}

double sum_squares(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i <= b; i++)
        // 下限和上限之间所有整数的平方和
        total += (double)i * (double)i;
    
    return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;

    if (begin > end) // 提供的下限大于上限
    {
        printf("%ld is not smaller than %ld.\n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low) // 提供的限制低于最低值
    {
        printf("Values must be %ld or greater.\n", low);
        not_good = true;
    }
    if (begin > high || end > high) // 提供的限制大于最高值
    {
        printf("Values must be %ld or less.\n", high);
        not_good = true;
    }

    return not_good; // 数值是否合规的布尔值标记
}