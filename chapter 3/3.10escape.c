#include <stdio.h>

int main(void)
{
    float salary;
    
    printf("\aEnter your desired monthly salary:"); // 1
    printf(" $_______\b\b\b\b\b\b\b"); // 2
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0); // 3
    printf("\rGee!\n"); // 4

    return 0;
}

/*
1. \a转义符为蜂鸣 部分支持的系统的扬声器会发出提示音
2. 由于上一次打印末尾没有换行符 此处美元符会出现在第一次打印的字符后
   由于一排下划线后又\b退格转义符 光标被移至美元符后 部分系统可能会删除下划线
   如果下划线没有被删除 此时输入的字符会逐个替换掉下划线
3. \n让打印的字符另起一行 \t将字符移动至第一个水平制表点（通常时第九列）
4. \r使光标退回至本行开始处 于最左侧 上次输出的字符之前 打印了"Gee!"
*/