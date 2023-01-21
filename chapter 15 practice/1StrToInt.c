#include <stdio.h>

unsigned char get_int(char *);


int main(void)
{
    char * str = "11110000";

    printf("%s = %u", str, get_int(str));

    return 0;
}


unsigned char get_int(char * strbits)
{
    unsigned char retval = 0b00000000;
    int i;

    for (i = 7; i > 0; i--)
    {
        if (strbits[i] == '1')
            retval |= 0b10000000;
        retval >>= 1;
    }
    if (strbits[i] == '1')
        retval |= 0b10000000;


    return retval;
}