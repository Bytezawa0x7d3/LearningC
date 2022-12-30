#include <stdio.h>

void put1(const char * string)
// 使用const限定符的参数 表明不会修改提供的实参
/* 使用const char * string 而不是 const char string[]
   从技术层面上二者相同 只是写法不同
   但后者更倾向于提示读者 函数处理一个字符数组
   但实际上可能传入的是指向字符的指针 或者字符串字面量
   因此用第一种语法 表明实际参数不一定是数组 */
{
    while (*string != '\0') // 根据空字符判定字符串的结束 不必额外传递长度
        // 结合律由右向左 先递增string的值 再解引用并输出递增前的值
        // 而不是先根据string找到指向的字符 再递增实参中的字符
        putchar(*string++);
}

/* 此处定义了类似puts()的函数
   它基于最基本的putchar()
   没有在输出完毕后自动换行的特性 */