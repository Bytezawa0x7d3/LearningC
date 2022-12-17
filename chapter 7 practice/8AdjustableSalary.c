#include <stdio.h>

#define TAXRATE1 0.15 // 第一阶段收税15%
#define TAXBREAK1 300 // $0-$300为税收第一阶段
#define TAXBASE1 (TAXRATE1 * TAXBREAK1) // 第一阶段税额
#define TAXRATE2 0.20 // 第二阶段收税20%
#define TAXBREAK2 450 // $301-$450为税收第二阶段
#define TAXBASE2 (TAXBASE1 + TAXRATE2 * (TAXBREAK2 - TAXBREAK1)) // 第二阶段税额
#define TAXRATE3 0.25 // 超过$450的部分为第三阶段 收税25%

void main(void)
{
    int num;
    int hour;
    double payrate;
    double salary;
    double tax;

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                           2) $9.33/hr\n");
    printf("3) $10.00/hr                          4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
    printf("Enter the number: ");
    while (scanf("%d", &num) == 1)
    {   
        switch (num)
        {
        case 1:
            payrate = 8.75;
            break;
        case 2:
            payrate = 9.33;
            break;
        case 3:
            payrate = 10.00;
            break;
        case 4:
            payrate = 11.20;
            break;
        case 5:
            goto end;
        default:
            printf("The number you entered is invalid. Enter again: ");
            continue;;
        }

        printf("Enter the number of hours you'd like to work per week: ");
        scanf("%d", &hour);

        if (hour < 40)
            salary = payrate * hour;
        else
            salary = payrate * (40 + 1.5 * (hour - 40));

        if (salary < TAXBREAK1)
            tax = salary * TAXRATE1;
        else if (salary < TAXBREAK2)
            tax = TAXBASE1 + TAXRATE2 * (salary - TAXBREAK1);
        else
            tax = TAXBASE2 + TAXRATE3 * (salary - TAXBREAK2);

        printf("Salary: %2lf\n", salary);
        printf("Tax: %2lf\n", tax);
        printf("Net income: %2lf\n", salary - tax);
        printf("Enter the number to select the payrate or action again: ");
    }
    end: printf("Done.");
}