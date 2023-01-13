#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LEN 20

enum spectrum {red, orange, yellow, green, blue, violet};
const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};

char * s_gets(char * str, int n);


int main(void)
{
    char choice[LEN]; // 存储输入字符串
    enum spectrum color; // 声明spectrum类型的枚举变量
    bool color_is_found = false; // 状态机

    puts("Enter a color (empty line to quit ): ");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0') // 读取失败或输入空行时结束
    {
        for (color = red; color <= violet; color++)
            // 每次迭代将color设为下一个枚举符的值 从red到violet
            if (strcmp(choice, colors[color]) == 0) // 如果输入字符串匹配
            {
                color_is_found = true; // 标记为找到颜色
                break;
            }
        switch (color) // 枚举变量适合作为switch的表达式
        {
            case red: // 此时枚举常量为标签的常量表达式
                puts("Roses are red.");
                break;
            case orange:
                puts("Poppies are orange.");
                break;
            case yellow:
                puts("Sunflowers are yellow.");
                break;
            case green:
                puts("Grass is green");
                break;
            case blue:
                puts("Bluebells are blue");
                break;
            case violet:
                puts("Violets are violet.");
                break;
            default:
                printf("I don't know about the color %s.\n", choice);
        }
        color_is_found = false;
        puts("Next color, please (empty line to quit): ");
    }
    puts("Goodbye!");

    return 0;
}


char * s_gets(char * str, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(str, n, stdin);
    if (ret_val)
    {
        if (find = strchr(str, '\n'))
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}