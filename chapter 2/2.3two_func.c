/*一个文件中有两个函数*/
#include <stdio.h>
void butler(void); // ANSI/ISO C函数原型
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writable DVDs.\n");

    return 0;
}

void butler(void) // 函数定义开始
{
    printf("You rang, sir?\n");
}

/*
函数原型 prototype
告知编译器正在使用某函数
所以有时也叫函数声明 function declaration

函数定义 function definition
包含函数的代码

函数调用 function call
使用函数之处
*/

/*
不讲究函数定义和调用的位置关系
不论main函数定义在何处 C程序都从main开始执行
*/