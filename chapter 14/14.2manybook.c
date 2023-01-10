#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100 // 存储的书籍数量

char * s_gets(char * st, int n);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}; // 结构声明

int main(void)
{
    static struct book library[MAXBKS];
    /* 部分编译器的默认存储自动变量的栈内存大小
       可能不足存放含有100个结构的数组
       使用static限定其为静态无连接变量
       避开自动变量的栈内存存储机制
       以分配足够内存给这个较大的存储单元 */
    int count = 0;
    int index;

    printf("Please enter the book title (empty line to quit): ");
    while (
        count < MAXBKS && // 检查录入的书本信息次数 防止超出大小
        s_gets(library[count].title, MAXTITL) &&  // 获取第一项输入 确保不是NULL
        library[count].title[0] != '\0') // 确保刚才的输入不是空行
    {
        printf("Now enter the author: ");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value: ");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n') // 每轮输入结束时丢弃剩余字符
            continue;
        if (count < MAXBKS) // 如果下次循环还会进行 提示再次输入
            printf("Enter the next title (empty line to quit): ");
    }

    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf(
                "%s by %s: $%.2f\n",
                library[index].title,
                library[index].author,
                library[index].value
                );
    }
    else
        printf("No books? Too bad.\n");

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