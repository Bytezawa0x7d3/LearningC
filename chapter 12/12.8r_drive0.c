#include <stdio.h>

extern unsigned int rand0(void);
// 显式说明该函数引用自其他编译单元
// 提醒读者该函数的定义不在此文件中

int main(void)
{
    int count;

    for (count = 0; count < 5; count++)
        printf("%d\n", rand0());
    
    return 0;
}