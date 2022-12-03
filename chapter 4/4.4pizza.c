#include <stdio.h>
#define PI 3.14159 // 定义了浮点数常量

int main(void)
{
    float area, circum, radius;
    printf("What is the radius of your pizza?");
    scanf("%f", &radius);
    area = PI * radius * radius; // 此处的PI会被预处理器替换为 3.14159
    circum = 2 * PI * radius; // 此处PI同上
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f\narea = %1.2f", circum, area);
    // 1.2f float类型转换说明 至少占用1个字符位置 保留两位小数
    
    return 0;
}

/*
define指令还可以声明字符和字符串常量
#define CHR 'A' // 用单引号声明了字符常量
#define STR "A" // 用双引号声明了字符串常量
#define WRONG = 5 // 错误的声明语法 会导致预处理器将代码中的WRONG替换成 = 5 而不是 5
*/