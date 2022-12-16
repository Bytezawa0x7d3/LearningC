#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet.\n");
    printf("Then I will give an animal name beginning with that letter.\n");
    printf("Please enter a letter (# to quit): ");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        if (islower(ch))
            switch(ch)
        {
            case 'a':
                printf("Argali, a wild sheep of Asia.\n");
                break;
            case 'b':
                printf("Babirusa, a wild pig of Malay.\n");
                break;
            case 'c':
                printf("Coati, racoonlike mammal.\n");
                break;
            case 'd':
                printf("Desman, aquatic, molelike critter.\n");
                break;
            case 'e':
                printf("Echidna, the spiny anteater.\n");
                break;
            case 'f':
                printf("Fisher, brownish marten.\n");
                break;
            default:
                printf("That is a stumper.\n");
        }
        else
            printf("Only lowercase letters can be recognized.\n");
        while (getchar() != '\n')
            // 读取剩余字符并不赋值给任何变量
            // 剩余字符如果不是换行符就再读取一次
            // 如果读取到换行符则结束不赋值的读取并回到外层循环提示再次输入
            // 如果没有赋值行为 getchar()的返回值会直接被丢弃
            continue;
        printf("Enter another letter (# to quit): ");
    }
    printf("Done.");

    return 0;
}