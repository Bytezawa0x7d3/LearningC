#include <stdio.h>

long getlong(int x);

int main(void)
{
    int num = 5;
    
    printf("%ld", getlong(num));

    return 0;
}

long getlong(int x)
{
    return (long)(x * x);
}