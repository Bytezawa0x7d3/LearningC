#include <stdio.h>

int main(void)
{
    char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Side B";

    puts(dont); 
    /* 提供字符数组 不是字符串 因为末尾不是空字符
       puts()会一直向后访问并输出内存中的内容
       直到遇见内存中的一个空字符为止 */

    return 0;
}