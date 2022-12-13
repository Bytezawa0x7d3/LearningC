#include <stdio.h>
#define SIZE 10
#define PAR 72

int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d", &score[index]);
        // 可以输入10次 或者输入10个空格分隔的数字

    printf("The scores read in are as follows:\n");
    // 输出读取的数据 以合适数据是否准确
    for (index = 0; index < SIZE; index++)
        // 适合用来处理长度为SIZE的数组的for循环头
        // 索引从0开始 到SIZE-1为最后一个
        printf("%5d", score[index]);
    printf("\n");

    for (index = 0; index < SIZE; index++)
        sum += score[index];
    average = (float)sum / SIZE;
    printf("Sum of scores = %d, average = %.2f.\n", sum, average);
    printf("That is a handicap of %.0f.", average - PAR);

    return 0;
}