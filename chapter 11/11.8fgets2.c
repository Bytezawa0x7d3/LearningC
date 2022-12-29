#include <stdio.h>
#define STLEN 10

int main(void)
{
    char words[STLEN];

    puts("Enter string (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done.");

    /* 一次输入长度大于10的字符 也会正常打印两次
       因为fgets会先读入9个字符 在末尾加上\0后存入words中
       随后fputs将这9个字符输出
       剩余的未被处理的输入字符将再次被循环开始的fgets读取
       直到读取到以\n为结尾的输入结束
       fputs也会将换行符输出 */

    return 0;
}