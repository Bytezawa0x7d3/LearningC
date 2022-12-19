#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

char get_choice(void);
float get_number(bool isdivide);

int main(void)
{
    char choice;
    float num1, num2;
    bool isdivide;

    while ((choice = get_choice()) != 'q')
    {   
        if (choice == 'd')
            isdivide = true;
        else
            isdivide = false;
        printf("Enter first number: ");
        num1 = get_number(false);
        printf("Enter second number: ");
        num2 = get_number(isdivide);
        while (getchar() != '\n')
            continue;

        switch (choice)
        {
        case 'a':
            printf("%g + %g = %g\n", num1, num2, num1 + num2);
            break;
        case 's':
            printf("%g - %g = %g\n", num1, num2, num1 - num2);
            break;
        case 'm':
            printf("%g * %g = %g\n", num1, num2, num1 * num2);
            break;
        case 'd':
            printf("%g / %g = %g\n", num1, num2, num1 / num2);
            break;
        default:
            printf("%g ? %g = ?\n", num1, num2);
            break;
        }
    }
    printf("Bye.");

    return 0;
}

char get_choice(void)
{
    char choice;

    printf("Enter the operation of your choice:\n");
    printf("a. add          s. subtract\n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");
    while (isspace(choice = getchar()))
        continue;
    
    return choice;
}

float get_number(bool isdivide)
{
    float number;
    char ch;

    while (true)
    {
        if (scanf("%f", &number) != 1)
        {
            printf("'");
            while ((ch = getchar()) != '\n')
                putchar(ch);
            printf("' is not a number. Please enter again: ");
            continue;
        }
        if (isdivide && (number == 0.0))
        {
            printf("0 cannot be a divisor. Please enter again: ");
            continue;
        }
        break;
    }

    return number;
}
