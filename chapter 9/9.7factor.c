#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit): ");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("No negative numbers, please.\n");
        else if (num > 12)
            printf("Keep input under 13.\n");
        else
            {
                printf("Loop: %d Factorial = %ld\n", num, fact(num));
                printf("Recursion: %d Factorial = %ld\n", num, rfact(num));
            }
        printf("Enter a value in the range 0-12 again (q to quit): ");
    }
    printf("Bye.");

    return 0;
}

long fact(int n)
{
    long ans;

    for (ans = 1; n > 1; n--)
        ans *= n;

    return ans;
}

long rfact(int n)
{
    long ans;

    if (n > 0)
        // 返回 n * (n - 1) * rfact(n - 1)
        // 假设n为5 函数链会构成 5 * 4 * 3 * 2 * 1 * 1
        ans = n * rfact(n - 1);
    else
        // 当n减到为0时 不再调用自己 通过返回1结束递归
        ans = 1;

    return ans;
}