#include <stdio.h>

char check_bit(int number, int bit);


int main(void)
{
    int number = 0b00100101011000100110011100010110;
    int x;

    for (x = 0; x < 32; x++)
        printf("The %dth bit of bit pattern of %d is %d.\n",
            x, number, check_bit(number, x) ? 1 : 0);

    return 0;
}


char check_bit(int number, int bit)
{
    unsigned mask;
    int i;

    for (i = 0, mask = 1; i < bit; i++, mask <<= 1)
        continue;

    if ((number & mask) == mask)
        return 1;
    else
        return 0;
}