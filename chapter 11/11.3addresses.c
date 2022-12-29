#include <stdio.h>
#define MSG "I am special."

int main(void)
{
    char ar[] = MSG;
    const char * pt = MSG;
    
    printf("Address of \"I am special\": %p\n", "I am special");
    printf("address of ar: %p\n", ar);
    printf("Address of pt: %p\n", pt);
    printf("Address of MSG: %p\n", MSG);
    printf("Address of \"I am special\": %p\n", "I am special");

    /* ar和pt的地址不一样
       编译器将静态存储区的字符串字面量的地址直接赋给指针
       对于数组 编译器创建新的内存区域 将字符串字面量的每个字符拷贝给数组
       两次直接显示字符串字面量的地址 输出相同
       说明编译器可以把多次使用的相同字面量存储在一处 多次访问 */

    return 0;
}