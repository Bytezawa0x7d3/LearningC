#include <stdio.h>

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}

/* s_gets()函数接受两个参数
   第一个参数指定何处存储读取内容
   第二个参数指定最多读取几个字符
   如果提前读到换行符 将换行符替换为空字符
   如果有过多的字符 将多出的字符丢弃
   函数基于fgets()函数
   返回值是fgets()的返回值
   是指向以读取到的字符串的首字符地址 */