#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n < 3)
        printf("n is %d\n", n);
        n++;
    
    /* 此处while循环是无限的
       因为循环的语句只有printf
       n++语句由于没有花括号 被算在while的结构化语句之外
       所以每次循环只执行一次printf语句 n的值不会发生改变 */

    printf("That is all the program does.");

    return 0;
}