#include <stdio.h>

unsigned int rotate(unsigned int bits, int n);


int main(void)
{
    unsigned int num = 0b11110000111100001111000011110000;
    
    printf("Rotate %u %d times will get %u.", num, 4, rotate(num, 4));

    return 0;
}


unsigned int rotate(unsigned int bits, int n)
{
    int i;

    for (i = 0; i < n; i++)
        if ((bits & 0x80000000) == 0x80000000)
        {
            bits <<= 1;
            bits |= 0x00000001;
        }
        else
            bits <<=1;
    
    return bits;
}