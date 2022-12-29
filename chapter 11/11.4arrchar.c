#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
    /* 每个元素为指向字符的指针 用字符串字面量初始化每个指针
       字符串本身是其首个字符的地址 将地址赋给每个指针 */
    const char * mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately",
        "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };
    /* 创建二维数组 外层数组的每个元素是字符数组
       将字符串字面量初始化给字符数组
       静态存储区域的字符串字面量的每个字符将拷贝给内层数组的每个元素 */
    char yourtalents[LIM][SLEN] = {
        "Walking in a straight line",
        "Sleeping",
        "Watching televasion",
        "Mailing letters",
        "Reading email"
    };
    int i;

    puts("Let's compare talents.");
    printf("%-36s     %-25s\n", "My talents", "Your talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s     %-25s\n", *(mytalents + i), yourtalents[i]);
    printf("Size of my talents: %zd, size of your talents: %zd",
            sizeof(mytalents), sizeof(yourtalents));
    /* mytalents的每个元素是指向字符串字面量首个字符的指针 只有40字节
       yourtalents的每个元素是长度为40的字符数组 占用200字节 */
    
    return 0;
}