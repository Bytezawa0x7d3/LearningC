#include <stdio.h>

void trystat(void);

int main(void)
{
    int count;

    for (count = 0; count <= 3; count++)
    {
        printf("Here comes iteration %d:\n", count);
        trystat(); // fade一直为1 stay每次调用时值不一样 依次输出为 1 2 3 4
    }
    
    return 0;
}

void trystat(void)
{
    int fade = 1; // 每次函数调用时初始化
    static int stay = 1; // 编译该函数时初始化

    printf("fade = %d, stay = %d\n", fade++, stay++);
}