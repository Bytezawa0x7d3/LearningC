#include <stdio.h>

int main(void)
{
    const char * mesg = "Don't be a fool!";
    const char * copy;

    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
    /* copy和mesg的值相同 都指向同一个位于静态存储区域的字符串字面量
       mesg=copy;语句只是将字符串的首个字符地址进行了赋值 而不是拷贝整个字符串 */

    return 0;
}