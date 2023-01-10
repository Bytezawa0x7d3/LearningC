#include <stdio.h>
#include <string.h>
#define MAXTITL 41 // 书名最长40个字符
#define MAXAUTL 31 // 作者姓名最长30个字符

char * s_gets(char * st, int n);

struct book // 结构模板
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library; // library声明为book类型的变量

    printf("Please enter the book title: ");
    s_gets(library.title, MAXTITL); // 访问title部分
    printf("Now enter the author: ");
    s_gets(library.author, MAXAUTL); // 访问author部分
    printf("Now enter the value: ");
    scanf("%f", &library.value); // 通过value的地址访问value部分

    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    printf("Done.");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin); // 读取失败返回NULL 读取成功返回st
    if (ret_val) // 如果读取成功
    {
        find = strchr(st, '\n'); // 找换行符
        if (find) // 如果有换行符 说明本次输入全部被读取
            *find = '\0'; // 不需要读入的换行符
        else // 没找到换行符说明还有字符残留
            while (getchar() != '\n')
                continue; // 将剩余字符读入并抛弃 避免妨碍下次读取
    }

    return ret_val; // 主调函数可以判断ret_val是否为NULL 得知是否读取成功
}
