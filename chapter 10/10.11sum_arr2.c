#include <stdio.h>
#define SIZE 10

int sump(int * start, int * end);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    
    return 0;
}

int sump(int * start, int * end)
{
    int total = 0;

    while (start < end)
    // 指针也可以是关系运算符的运算对象
    /* 被处理的start实际上无法递增到end
       所以end指向的位置是数组最后一个元素的后面 */
    {  
        total += *start;
        start++; // 
        /* 指向int类型数值的指针自增
           相当于其递增int类型的大小
           到下一个编号更大的存储空间 */
    }
    /* 循环体中的语句可以改写成如下
       total += *start++
       间接运算符和递增运算符优先级相同
       但是结合律为从右向左
       先对start进行后缀递增
       所以简介运算符使用的是递增之前的值
       与total相加后赋值给total之后
       start的值才发生变化 */

    return total;
}