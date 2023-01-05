#include <stdio.h>
#include <stdlib.h>

// 显式说明以下函数来自其他编译单元
extern int rand1(void);
extern void srand1(unsigned int x);

int main(void)
{
    int count;
    unsigned int seed;

    printf("Please enter your choice for seed: ");
    while (scanf("%u", &seed) == 1)
    {
        srand1(seed); // 根据输入值修改它所在文件私有的全局变量next
        for (count = 0; count < 5; count++)
            printf("%d\n", rand1());
        printf("Please enter next seed (q to quit): ");
    }
    printf("Done");

    return 0;
}