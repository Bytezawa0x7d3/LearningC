#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct month {
    char name[10];
    char abbr[4];
    int days;
    int num;
};

struct date {
    int day;
    char month[10];
    int year;
};

void getinfo(struct date * dateptr);
void setleapyear(struct month months[], int year);
int getdays(const struct month months[], const struct date * dateptr);

int main(void) {
    struct date input;
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

    while (1)
    {
        getinfo(&input);
        setleapyear(months, input.year);
        printf("Number of days from the beginning of %d to %s %d: %d\n\n",
            input.year, input.month, input.day, getdays(months, &input));
    }

    return 0;
}


void getinfo(struct date * dateptr)
{
    printf("Enter a date such as \"15 Jan 2023\": ");
    scanf("%d %s %d", &dateptr->day, dateptr->month, &dateptr->year);
    while (getchar() != '\n')
        continue;
}


void setleapyear(struct month months[], int year)
{
    months[1].days = (year % 4 == 0 || year % 400 == 0) ? 29 : 28;
}


int getdays(const struct month months[], const struct date * dateptr)
{
    int x, y;
    int sumdays = 0;

    for (x = 0; x < 12; x++)
        if (strcmp(months[x].name, dateptr->month) == 0 ||
            strcmp(months[x].abbr, dateptr->month) == 0 ||
            atoi(dateptr->month) == months[x].num)
            break;
    if (x == 12)
        return sumdays;
    
    for (y = 0; y < x; y++)
        sumdays += months[y].days;
    sumdays += dateptr->day; 
    
    return sumdays;
}