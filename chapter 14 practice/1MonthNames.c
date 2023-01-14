#include <stdio.h>
#include <string.h>

struct month {
        char name[10];
        char abbr[4];
        int days;
        int num;
};

int sum_days(struct month months[], char * end);


int main(void)
{
    char input_name[10];
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
    scanf("%s", input_name);
    printf("Sum of days from January to %s: %d", input_name, sum_days(months, input_name));

    return 0;
}


int sum_days(struct month months[], char * end)
{
    int sum = 0;
    int x, y;

    for (x = 0; x < 12; x++)
        if (strcmp(months[x].name, end) == 0)
            y = months[x].num;

    for (x = 0; x < y; x++)
        sum += months[x].days;
    
    return sum;
}