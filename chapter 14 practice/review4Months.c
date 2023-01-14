#include <stdio.h>

int main(void)
{
    int input_num;
    int x;
    int sum_days = 0;
    struct {
        char name[10];
        char abbr[4];
        int days;
        int num;
    } months[12] = {
        {"January", "Jan", 31, 1},
        {"Febuary", "Feb", 28, 2},
        {"March", "Mar", 31, 3},
        {"April", "Apr", 30, 4},
        {"May", "May", 31, 5},
        {"June", "Jun", 30, 6},
        {"July", "Jul", 31, 7},
        {"August", "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"Octuber", "Oct", 31, 10},
        {"November", "Nov", 30, 11},
        {"December", "Dec", 31, 12}
    };

    fputs("Enter the number with [1, 12]: ", stdout);
    scanf("%d", &input_num);
    for (x = 0; x < input_num; x++)
        sum_days += months[x].days;
    printf("Sum of days from January to your provided month: %d", sum_days);

    return 0;
}