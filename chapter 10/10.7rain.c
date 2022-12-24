#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void)
{
    const float rain[YEARS][MONTHS] = 
    {
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
        { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
        { 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
        { 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
        { 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
    };
    int year, month;
    float subtot, total;

    printf(" YEAR RAINFALL (inches)\n");
    // 嵌套循环适合处理多维数组
    for (year = 0, total = 0; year < YEARS; year++)
    {   
        // 外层循环处理二维数组的第一个下标
        for (month = 0, subtot = 0; month < MONTHS; month++)
            // 内层循环处理第二个下标
            subtot += rain[year][month]; // 根据循环创建的下标访问二维数组
        printf("%5d %15.1f\n", 2010 + year, subtot); // 计算某年12个月的总降水量
        total += subtot; // 计算5年的总降水量
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES:\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
            // 计算5年的同一个月的总降水量
            subtot += rain[year][month];
        printf("%4.1f ", subtot / YEARS); // 计算每个月的平均降水量
    }

    return 0;
}