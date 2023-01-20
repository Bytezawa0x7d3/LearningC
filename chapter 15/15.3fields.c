#include <stdio.h>
#include <stdbool.h>

#define SOLID 0b00
#define DOTTED 0b01
#define DASHED 0b10

#define BLUE 0b100
#define GREEN 0b010
#define RED 0b001
#define BLACK 0b000
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

const char * colors[8] = {
    "black", "red", "green", "yellow",
    "blue", "magenta", "cyan", "white"
};

struct box_props {
    bool opaque : 1; // 是否透明
    unsigned int fill_color : 3; // 填充色
    unsigned int : 4; // 补全为1字节
    bool show_border : 1; // 是否有边框
    unsigned int border_color : 3; // 边框色
    unsigned int border_style : 2; // 边框线类型
    unsigned int : 2;  // 补全为1字节
};

void show_settings(const struct box_props * pb);


int main(void)
{
    struct box_props box = {true, YELLOW, true, GREEN, DASHED};
    // 用同样的初始化列表语法来初始化位字段结构

    printf("Original box settings:\n");
    show_settings(&box);

    box.opaque = false;
    box.fill_color = WHITE;
    box.border_color = MAGENTA;
    box.border_style = SOLID;
    // 同样使用结构成员运算符 访问或修改位字段成员

    printf("\nModified box settings:\n");
    show_settings(&box);

    return 0;
}

void show_settings(const struct box_props * pb)
{
    printf("Box is %s\n", (pb->opaque == true) ? "opaque" : "transparent");
    printf("The fill color is %s.\n", colors[pb->fill_color]);
    printf("Border %s.\n", (pb->show_border == true) ? "shown" : "not shown");
    printf("The border color is %s.\n", colors[pb->border_color]);
    printf("The border style is ");
    switch (pb->border_style) // 间接成员运算符 访问位字段结构的字段成员 
    {
    case DASHED:
        printf("dashed.\n");
        break;
    case SOLID:
        printf("solid.\n");
        break;
    case DOTTED:
        printf("dotted.\n");
        break;
    default:
        printf("unknown type.\n");
    }
}