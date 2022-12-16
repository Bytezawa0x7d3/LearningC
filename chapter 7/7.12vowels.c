#include <stdio.h>

int main(void)
{
    char ch;
    int a_ct, e_ct, i_ct, o_ct, u_ct;

    a_ct = e_ct = i_ct = o_ct = u_ct = 0;
    printf("Enter some text (# to quit): ");
    while ((ch = getchar()) != '#')
    {
        switch (ch) 
        /* switch的整型表达式可以改为ctype.h中的toupper(ch)
           在一开始就将小写字母转大写 便可以去除常量为小写字母的标签 */

        {   
            /* 如果字母是小写 程序会跳转到常量为对应小写字母的标签
               小写字母标签后没有语句（可选 所以合法）也没有break
               便会执行下一个标签的语句 即对应大写字母的标签的语句
               大写字母标签的语句使对应计数器递增 并且有break以跳出整个switch语句
               实现了小写和大写字母的正确识别 */
            case 'a':
            case 'A':
                a_ct++;
                break;
            case 'e':
            case 'E':
                e_ct++;
                break;
            case 'i':
            case 'I':
                i_ct++;
                break;
            case 'o':
            case 'O':
                o_ct++;
                break;
            case 'u':
            case 'U':
                u_ct++;
                break;
            default:
                break;
        }
    }
    printf("Number of vowels:    A    E    I    O    U\n");
    printf("                 %5d%5d%5d%5d%5d", a_ct, e_ct, i_ct, o_ct, u_ct);

    return 0;
}