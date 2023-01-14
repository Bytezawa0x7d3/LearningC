#include <stdio.h>

struct month {
        char name[10];
        char abbr[4];
        int days;
        int num;
};

int sum_days(struct month months[], int end);


int main(void)
{
    int input_num;
    struct month months[12] = {
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
    printf("Sum of days from January to your provided month: %d", sum_days(months, input_num));

    return 0;
}


int sum_days(struct month months[], int end)
{
    int sum = 0;
    int x;

    for (x = 0; x < end; x++)
        sum += months[x].days;
    
    return sum;
}