#include <stdio.h> // 提供printf函数的原型
#include <string.h> // 提供strlen函数的原型
#define DENSITY 62.4 // 用新的预处理器指令define 定义人体密度为常量  pound / inch^3

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];
    /* name为一个长度为40的数组 array 
       存储字符串 character string 
       即用户输入的名字
       它占用40个连续的字节
       每个字节存储一个字符的位组合 */

    printf("Hi! What is your first name?\n");
    scanf("%s", name); // %s 转换说明处理字符串的输入和输出 name不加&前缀
    printf("%s, what is your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name); // 用新的函数strlen获取字符串长度
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.", size);

    return 0;
}