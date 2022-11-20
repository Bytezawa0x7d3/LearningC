#include <stdio.h>

int main(void)
{
    float weight; // 浮点数变量 可以存储带小数位的数字
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");
    
    scanf("%f", &weight);
    // %f占位符告知scanf运算符将用户输入值视为浮点数
    // &意为找到weight变量的地点 并将浮点数值置于此
    value = weight * 14.5833 * 1700.0;

    printf("Your weight in platinum is worth $%.2f.\n", value);
    // %d 整数占位符
    // %f 浮点数占位符 %.2f为格式化后保留小数点后两位
    printf("You are easily worth that! If Platinum prices drop,\n");
    printf("Eat more to maintain your value.\n");

    getchar(); // 读取输入数字后按enter带来的换行符
    getchar(); // 等待另一个enter以保持输出内容

    return 0;
}