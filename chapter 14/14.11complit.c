#include <stdio.h>
#define MAXTILT 41
#define MAXAUTL 31

struct book {
    char title[MAXTILT];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book readfirst;
    int score;
    
    printf("Enter test score: ");
    scanf("%d", &score);

    // 根据输入值 使用对应的结构复合字面量 赋值给结构变量
    if (score >= 84)
        readfirst = (struct book) {
            "Crime and Punishment",
            "Fyodor Dostoyevsky",
            11.25
        };
    else
        readfirst = (struct book) {
            "Mr. Bouncy's Nice Hat",
            "Fred Winsome",
            5.99
        };
    
    printf("Your assigned reading:\n");
    printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);

    return 0;
}