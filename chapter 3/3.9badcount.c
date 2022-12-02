#include <stdio.h>

int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    
    printf("%d\n", n, m); // 参数过多
    printf("%d %d %d\n", n); // 参数过少
    printf("%d %d\n", f, g); // 参数类型不匹配

    return 0;
}

/*
使用函数运算符时应该注意参数的相关问题
确保参数数量和类型都匹配
否则会引发意料之外的输出或其他错误

此类错误可能不阻止编译器编译程序
也不影响程序的运行
有时只有在输出结果不符合期望时人才会发现此问题
*/