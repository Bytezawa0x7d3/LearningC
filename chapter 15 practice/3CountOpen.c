#include <stdio.h>

int count_open(int num);


int main(void)
{
    int number = 0b1111001011110100;

    printf("%d countains %d opened bits.", number, count_open(number));

    return 0;
}


int count_open(int num)
{
    unsigned int mask;
    int count = 0;
    int i;

    for (i = 0, mask = 1; i < 32; i++, mask <<= 1)
        if ((num & mask) == mask)
            count++;
    
    return count;
}