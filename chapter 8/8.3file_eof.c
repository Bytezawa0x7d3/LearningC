#include <stdio.h>
#include <stdlib.h> // exit()函数可以直接退出

int main(void)
{
    int ch; // 整数类型的字符变量 可以用-1表示EOF
    FILE * fp;
    char fname[50]; // 文件名字符串

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    /* fopen()打开文件函数
       接受字符串文件名和字符串打开模式
       如果打开失败返回NULL
       如果打开成功返回文件 */
    if (fp == NULL)
    {
        // 打开失败直接退出
        printf("Failed to open file.");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
        // getc()用于读取文件中的单个字符
        putchar(ch);
    fclose(fp); // 关闭文件

    return 0;
}