#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;
    // long类型整数支持更大的范围 0L意为long类型的值为0的常量 不加L后缀默认为int类型

    printf("Please enter an integer to be sumed (q to quit): ");
    status = scanf("%ld", &num); // 进入循环体之前必须先获取一次输入
    while (status == 1)
    // 相等运算符 equality operator 左右两侧运算对象值相等 循环就会继续
    {
        sum = sum + num;
        printf("Please enter the next integer (q to quit): ");
        status = scanf("%ld", &num); // 再次获取输入为下一次迭代的测试条件做准备
        /* 利用scanf的特性 同时更新num和status的值
           scanf的返回值是读取成功的次数
           如果输入数字 scanf能够用转换说明ld成功读取输入值一次 返回1
           status被赋值为1 下次循环会继续
           如果输入其他非数字字符 scanf会读取失败 成功读取0次 返回0
           status被赋值为0 while的测试条件不通过 循环结束
           如果遇到文件结尾或者硬件错误 scanf会返回EOF 通常其值被定义为-1 */
    }
    printf("Those integers sum to %ld.", sum);
    
    return 0;
}


/* 伪代码 pseudo code

   把sum初始化为0
   提示用户输入数据
   读取用户输入的数据
   当输入的数据为整数时
   输入添加给sum
   提示用户进行输入
   然后读取下一个输入
   输入完成后打印sum的值 */


/*

C风格读取循环 可以再测试条件中使用读取输入函数

while (scanf("%ld", &num) == 1)
{
    循环行为;
}

当获取值和判断值都成功
    处理该值

*/