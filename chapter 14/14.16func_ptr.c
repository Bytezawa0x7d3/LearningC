#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81

char * s_gets(char * str, int n);
char showmenu(void);
void eatline(void);

// 第一个参数接受指针 将指向下方四个函数中的一个
void show(void (* fp)(char *), char * str);

// 以下四个函数的签名内容相同 可以用同类型的函数指针
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);


int main(void)
{
    char line[LEN];
    char copy[LEN];
    char choice;
    void (* pfun)(char *);

    puts("Enter a string (empty line to quit): ");
    while (s_gets(line, LEN) != NULL && line[0] != '\0')
    {
        while ((choice = showmenu()) != 'n')
        {
            switch (choice) // 整型表达式
            {
            // 根据输入的字符 让指针指向特定的函数
            case 'u': pfun = ToUpper; break;
            case 'l': pfun = ToLower; break;
            case 't': pfun = Transpose; break;
            case 'o': pfun = Dummy; break;
            }
            strcpy(copy, line); // 将本次输入内容复制一份
            show(pfun, copy); // 修改并显示输入内容的副本 以便下次还能处理原内容
        }
        puts("Enter a string (empty line to quit): ");
    }
    puts("Bye.");

    return 0;
}


char showmenu(void)
{
    char ans;

    puts("u) uppercase         l) lowercase");
    puts("t) transposed case   o) original case");
    puts("n) next string");
    puts("Enter menu choice: ");
    ans = getchar();
    ans = tolower(ans); // 获取输入的第一个字符并转换小写
    eatline(); // 读取并丢弃剩余字符 防止干扰下次的getchar()
    while (strchr("ulton", ans) == NULL)
    {   
        // 输入输入的字符不可用 提示并再次获取输入 直到输入合法
        puts("Please enter one of u/l/t/o/n: ");
        ans = tolower(getchar());
        eatline();
    }

    return ans; // 返回输入值给主调函数
}


void eatline(void)
{
    while (getchar() != '\n')
        continue;
}


void ToUpper(char * str)
{   
    // 包装字符转型函数 使其能处理字符串
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}


void ToLower(char * str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}


void Transpose(char * str)
{
    while (*str)
    {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

void Dummy(char * str)
{
    ;
}


void show(void (*fp)(char *), char * str)
{
    fp(str); // 调用指针指向的函数
    puts(str); // 输出处理后的内容
}


char * s_gets(char * str, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(str, n, stdin);
    if (ret_val)
    {
        if (find = strchr(str, '\n'))
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}