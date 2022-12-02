#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t me32; // 可移植精确宽度整数类型 本系统中它是int的别名
    me32 = 45933945;

    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);
    /* 此处字符串宏PRId32被定义在inttypes.h中的d替换
       所以此字符串等价于 "me32 = %" "d" "\n"
       在C语言中可以将多个字符串组合成一个字符串 所以此语句又等价于
       "me32 = %d\n" */

    return 0;
}

/*
此处只介绍了一种可移植类型 
其他详细解释见附录B参考资料VI拓展的整数类型
有完整的关于inttypes.h和stdint.h的介绍
*/