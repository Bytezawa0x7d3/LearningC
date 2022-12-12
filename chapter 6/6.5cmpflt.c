#include <math.h>
#include <stdio.h>

int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi: ");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001)
    // 计算两者的差的绝对值 如果差大于0.0001就提示再次输入
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}