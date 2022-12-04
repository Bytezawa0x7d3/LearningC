#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets and favorite pet:\n");
    scanf("%d %f", &age, &assets); // 基本数据类型需用&
    scanf("%s", pet); // 字符数组类型无需&
    printf("%d $%.2f %s\n", age, assets, pet);

    /* scanf()函数使用空白（空格 换行符 制表符）将输入的文本分成多个字段
       再按照顺序使用对应的转换说明将字符转换为C语言类型
       在此示例程序中 可以将三个值在一行内以空格分隔输入 也可以通过换行分成三行输入
       
       使用%c转换说明时是唯一例外 %c会让scanf读取任何字符 包括空白 */

    return 0;
}