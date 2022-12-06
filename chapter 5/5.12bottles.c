#include <stdio.h>
#define MAX 100

int main(void)
{
    int count = MAX + 1;
    
    while (--count > 0) // < > 属于关系运算符 relation operator
    {
        printf("%d bottles of sprint water on the wall, "
               "%d bottles of sprint water!\n", count, count);
        printf("Take one down and pass it around, ");
        printf("%d bottles of sprint water!\n\n", count - 1);
    }

    return 0;
}