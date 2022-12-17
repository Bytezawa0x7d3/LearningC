#include <stdio.h>

void main(void)
{
    int taxbreak;
    int select;
    int income;
    float taxrate1 = 0.15;
    float taxrate2 = 0.28;
    float tax;

    printf("1) single         2) property owner\n");
    printf("3) married        4) divorced\n");
    printf("5) quit\n");
    printf("Enter a number to select the type of your tax or quit: ");
    while (scanf("%d", &select) == 1)
    {
        switch (select)
        {
        case 1:
            taxbreak = 17850;
            break;
        case 2:
            taxbreak = 23900;
            break;
        case 3:
            taxbreak = 29750;
            break;
        case 4:
            taxbreak = 14875;
            break;
        case 5:
            goto end;
        default:
            printf("Please enter a valid number: ");
            continue;
        }
        
        printf("Enter your income: ");
        scanf("%d", &income);

        if (income <= taxbreak)
            tax = income * taxrate1;
        else
            tax = taxrate1 * taxbreak + taxrate2 * (income - taxbreak);

        printf("Your tax is %f.\n", tax);
        printf("Enter the number to select again or quit: ");
    }
    end: printf("Done.");
}
