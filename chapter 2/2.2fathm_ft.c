// 把2英寻转换为英尺
#include <stdio.h>
int main(void){
    int feet, fathoms;
    /* 同等于
    int feet;
    int fathoms;
    */

    fathoms = 2;
    feet = 6 * fathoms; // * 乘法运算符
    printf("There are %d feet in %d fathoms!\n", feet, fathoms); // 两个占位符和两个值
    printf("Yes, I said %d feet!\n", 6 * fathoms); // 提供的参数也可以是表达式 最后参数为运算出的值

    return 0;
}