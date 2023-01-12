#include <stdio.h>
#define LEN 20

const char * msgs[5] = 
{
    "   Thank you for the wonderful evening, ",
    "You certainly prove that a ",
    "is a special kind of guy. We must get together",
    "over a delicious ",
    " and have a few laughs"
}; // 使用指针元素指向每个字符串字面量

struct names {
    char first[LEN];
    char last[LEN];
}; // 用于其他结构的成员

struct guy {
    struct names handle; // 使用names标识的模板作为guys的成员
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow = {
        {"Ewen", "Villard"}, // 初始化值也可以是初始化列表 提供个内层的结构成员
        "grilled salmon",
        "personailty coach",
        68122.00
    }; // 使用初始化列表和普通初始化器

    printf("Dear %s,\n\n", fellow.handle.first);
    printf("%s%s.\n", msgs[0], fellow.handle.first);
    printf("%s%s\n", msgs[1], fellow.job);
    printf("%s\n", msgs[2]);
    printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
    if (fellow.income > 150000.0)
        puts("!!");
    else if (fellow.income > 75000.0)
        puts("!");
    else
        puts(".");
    printf("\n%40s%s\n", " ", "See you soon,");
    printf("%40s%s\n", " ", "Shalala");

    return 0;
}