#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double * ptd;
    int max;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    if (scanf("%d", &max) != 1)
    {
        // 读取失败 程序退出
        puts("Number not correctly entered.");
        exit(EXIT_FAILURE);
    }
    // 根据输入 动态分配所需的内存
    ptd = (double *) malloc(max * sizeof(double));
    if (ptd == NULL)
    {   
        // malloc()返回NULL说明内存分配失败 程序退出
        puts("Memory allocated failed.");
        exit(EXIT_FAILURE);
    }
    puts("Enter the values (q to quit):");
    while (i < max && scanf("%lf", &ptd[i]) == 1)
        // 用while循环获取指定数量的输入
        i++;
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++)
    {   
        // 将每次输入的浮点数输出
        printf("%7.2f", ptd[i]);
        if (i % 7 == 6)
            putchar('\n');
    }
    putchar('\n');
    puts("Done.");
    free(ptd); // 释放之前分配的内存块

    return 0;
}