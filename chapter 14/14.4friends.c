#include <stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] = {
        {
            {"Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            68112.00
        },
        {
            {"Rodney", "Swillbelly"},
            "tripe",
            "tabloid editor",
            432400.00
        }
    }; // 给嵌套结构的数组使用嵌套初始化列表
    struct guy * him; // 结构类型指针的声明

    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]); // 两个结构元素的地址
    him = &fellow[0]; // 给结构指针赋值结构的地址
    printf("pointer #1: %p #2: %p\n", him, him + 1); // 结构指针加减运算也能指向相邻的元素 
    printf("him->income is $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);
    him++; // 指向下一个结构的存储空间
    printf("him->income is $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);

    return 0;
}