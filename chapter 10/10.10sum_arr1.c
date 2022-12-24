#include <stdio.h>
#define SIZE 10

int sum(int [], int);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof(marbles));
    /* 此处sizeof()返回40
       因为它直接被传入数组marbles
       而marbles有10个宽度为4字节的int值 */

    return 0;
}

int sum(int ar[], int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof(ar));
    /* 此处sizeof(ar)将返回8
       因为传递给函数sum的为指向ar首个元素的指针
       而本系统使用8字节存储地址 */
    
    return total;
}