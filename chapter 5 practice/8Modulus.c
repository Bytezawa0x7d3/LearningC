#include <stdio.h>

int main(void)
{
    int num_2, num_1;

    printf("This program comutes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &num_2);
    printf("Now enter the first operand: ");
    scanf("%d", &num_1);
    while (num_1 > 0)
    {
        printf("%d %% %d = %d\n", num_1, num_2, num_1 % num_2);
        printf("Enter next number for first operand (<=0 to quit): ");
        scanf("%d", &num_1);
    }
    printf("Done.");
}