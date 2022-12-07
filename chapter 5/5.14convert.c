#include <stdio.h>

int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i  = %d, fl = %2.2f\n", ch, i, fl); // C 67 67.00
    /* 赋值运算时 'C'会被转换成被赋值变量的类型
       'C'被作为1字节的ASCII值存于ch中
       'C'被转换为int类型的整数67以4字节宽度存于i中
       'C'被转换为67后又被转换为float类型的浮点数67.00存于fl中 */

    ch = ch + 1;
    /* 在两种类型的运算中 计算机对较低等级类型进行升级 以达到类型的统一
       ch + 1 中为了兼容int类型的1 ch被升级为4字节的int类型67
       67 + 1 为int类型的68 在给char类型的ch赋值时又被降级截断为1字节的char类型
       此时ch为1字节的char类型ASCII值68 对应ASCII字符D */

    i = fl + 2 * ch;
    /* char类型的ch先转换为int类型与2相乘
       然后将该子表达式的结果转换成float与fl相加
       最后右侧表达式的结果是float类型
       为了给i赋值 被最终截断为int类型 */

    fl = 2.0 * ch + i;
    /* ch先转换为浮点数与2.0相乘 结果为浮点数
       浮点数和整数做加法 其中更低级别的值会转换为更高类型
       i被转换为浮点数与2.0*ch子表达式的浮点数结果相加 
       最后结果无需转型赋给变量fl */


    printf("ch = %c, i  = %d, fl = %2.2f\n", ch, i, fl); // D 203 339.00

    ch = 1107;
    // 1107的位组合宽度超过1字节 赋给ch时发生了截断降级 只取了后1字节 十进制为83
    printf("Now ch = %c\n", ch); // S
    ch = 80.89;
    // 浮点数的位组合发生降级后 也是只取后1字节 但是结果不好预测
    printf("Now ch = %c\n", ch); // P

    return 0;
}