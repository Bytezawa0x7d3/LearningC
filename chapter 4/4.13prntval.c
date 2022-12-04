#include <stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);
    /* printf()在打印字符后返回打印字符的数量给主调程序 calling program
       非可见字符比如\n以及空格都被计入 */

    return 0;
}