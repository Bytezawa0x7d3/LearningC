#include <stdio.h>
#define STLEN 14

int main(void)
{
    char words[STLEN];

    puts("Enter a string please:");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts() then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string please:");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts() then fputs()):\n");
    puts(words); // 如果输入提前因换行符结束 换行符就会被读入 puts()会多换行一次
    fputs(words, stdout); // fputs()不会自动换行
    puts("Done.");

    return 0;
}