#include <stdio.h>

int main(void)
{
    int guess = 1;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a 'y' if my guess is right.\n");
    printf("Respond with an'n' if my guess is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {   
        if (response == 'n')
            printf("Well, then, is it %d?\n", ++guess);
        else
            // 针对开头不是y或n的不合规输入给予特别提醒
            printf("Sorry, I understand only 'y' or 'n'.\n");
        while (getchar() != '\n')
            // 循环读取并丢弃输入的剩余部分 直到读取并丢弃掉enter带来的换行符
            continue;
    }
    printf("I know I could do it!");

    return 0;
}