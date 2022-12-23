#include <stdio.h>

int main(void)
{
    // 初始化时省略方括号中的数字 编译器会自动根据初始化列表的项数确定数组大小
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof(days) / sizeof(days[0]); index++)
        /* 使用sizeof()函数自动计算数组的元素数 以此确定循环次数
           数组总字节数 / 数组单个元素字节数 = 数组元素数 */
        printf("Month %2d has %d days.\n", index + 1, days[index]);
        /* 自动确定大小也有弊端 无法让人察觉初始化列表中项的个数有误
           一共有12个月 只提供了10个月的数据 编译器就只打印了10个值
           如果初始化时向方括号内提供数组大小为12
           编译器将会打印12行 后两行的数据为0 有利于排查出问题 */
    
    return 0;
}