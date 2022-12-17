#include <stdio.h>

#define SALARY 10 // $10每小时
#define OVERLOAD 40 // 超过40小时为加班时间
#define OVERLOADRATE 1.5 // 加班时间放大倍率
#define SALARYBASE (OVERLOAD * SALARY) // 加班之前所有薪水

#define TAXRATE1 0.15 // 第一阶段收税15%
#define TAXBREAK1 300 // $0-$300为税收第一阶段
#define TAXBASE1 (TAXRATE1 * TAXBREAK1) // 第一阶段税额
#define TAXRATE2 0.20 // 第二阶段收税20%
#define TAXBREAK2 450 // $301-$450为税收第二阶段
#define TAXBASE2 (TAXBASE1 + TAXRATE2 * (TAXBREAK2 - TAXBREAK1)) // 第二阶段税额
#define TAXRATE3 0.25 // 超过$450的部分为第三阶段 收税25%

void main(void)
{
    int hour;
    double salary;
    double tax;

    printf("Enter how many hour you'd like to work for a week (q to quit): ");
    while (scanf("%d", &hour) == 1)
    {
        if (hour < 40)
            salary = 10 * hour;
        else
            salary = SALARYBASE + 10 * OVERLOADRATE * (hour - OVERLOAD);
        if (salary < TAXBREAK1)
            tax = salary * TAXRATE1;
        else if (salary < TAXBREAK2)
            tax = TAXBASE1 + TAXRATE2 * (salary - TAXBREAK1);
        else
            tax = TAXBASE2 + TAXRATE3 * (salary - TAXBREAK2);
        printf("Salary: %2lf\n", salary);
        printf("Tax: %2lf\n", tax);
        printf("Net income: %2lf\n", salary - tax);
        printf("Enter again (q to quit): ");
    }
}