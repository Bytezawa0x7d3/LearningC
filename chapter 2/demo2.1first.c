/*预处理指令 包含另一个文件 将stdio.h文件中的内容包含至本程序*/
#include <stdio.h>

int main(void)  //main为函数名 void意为函数不接受任何参数
{   
    //函数体开始
    int num; //声明整数类型变量
    num = 1; //赋值

    printf("I am a simple "); //printf是标准C库函数
    printf("computer.\n"); // 此处调用三次printf
    printf("My favorite number is %d because it is first.\n", num);
    //通过%d内嵌num的值于字符中

    getchar(); //通过等待输入保持窗口

    return 0; //函数通过返回动作给调用方提供一个值 此处返回0以结束函数
} //函数体结束

/*
预处理器指令
#include <stdio.h>
#预处理器指令preprocessor directive + include包含头文件内容 = 使用C预处理器将头文件内容拷贝粘贴于此
头文件header.h 在C程序顶部的信息集合 包含常量、函数名、如何使用一些函数
但函数具体代码在一个包含预编译代码的库文件中 头文件只负责将他们组织起来
不内置函数反而按需取用的原因是C追求轻便和快速 
*/

/*
定义函数
int main(void)
以main为名的函数为C程序的入口 可以理解main为一个关键字
函数是C程序的基本模块 其他函数可以任意命名
()代表main是一个函数 int代表main()的返回值为整数 void代表不传入任何参数
写法有多种 根据不同C标准各有特点 但此处写法被绝大多编译器认可
*/

/*
花括号
{}花括号标记函数体的开始和结束 亦用于合并多条语句为一个单元或块
*/

/*多行注释*/
//单行注释

/*
声明 declaration
int num;  函数中有一个名为num的整数变量
分号为声明语句的一部分 不只是分隔符
编译器根据此信息在内存中分配空间
int为关键字keyword，指已被该语言定义作用和含义的词
num为标识符identifier，函数变量或其他实体的名字，它于计算机内存中的特定位置连接
先声明变量再使用 通常先在函数最初声明所有所需变量
字母或下划线开头，不包含其他运算符如*&$
	所有声明语句放在一起，有助于理解程序
	声明变量促使人做计划
	有助于发现错误，如调用的变量名因拼错而引发的变量不存在错误
	不事先声明变量，程序则无法通过编译
*/

/*
赋值
num=1;
通过运算符=将1这个值与num标识符关联起来
*/

/*
printf()函数
printf(“helloworld”);
将参数“helloworld”作为实参放入圆括号中给printf函数
在执行函数时，控制权交给printf，结束后控制权回到main
\n 转义序列escape sequence中的换行符
%d 字符串中的占位符
*/

/*
return语句
return 0;在main函数中可有可无
但是可以看作统一代码风格，所以在任何有返回值的函数里都不要漏掉。
*/

/*
简单C程序结构
#include <stdio.h>
int main(void) //函数头
{
函数体;
语句;
return 0;
}
*/