#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dice, sides, sets;
    int result;
    int i, j;

    printf("Enter the number of sets (q to stop): ");
    while (srand((unsigned int)time(0)) ,scanf("%d", &sets) == 1)
    {
        if (sets <= 0)
        {
            printf("The number of sets should be a positive integer. Input again: ");
            continue;
        }
        printf("How many sides and how many dice: ");
        if (scanf("%d%d", &sides, &dice) != 2 || sides <= 0 || dice <= 0)
        {
            printf("Both of numbers of sides and dice should be positive integers.\n");
            printf("Now enter the number of sets again: ");
            while (getchar() != '\n')
                continue;
            continue;
        }

        printf("Here are %d sets of %d %d-sided throws:\n", sets, dice, sides);
        for (i = 0; i < sets; i++)
        {
            result = 0;
            for (j = 0; j < dice; j++)
                result += rand() % sides + 1;
            printf("%d %c", result, (i % 15 == 14) ? '\n' : '\0');
        }
        printf("%c", (i % 15 == 0) ? '\0' : '\n');
        printf("\nHow many sets (q to stop): ");
    }
    printf("Done.\n");

    return 0;
}