#include <stdio.h>

int fibonacci(int index);

int main(void)
{
    int i;
    
    printf("Fibonacci numbers from the first one to the tenth one:\n");
    for (i = 1; i < 11; i++)
        printf("%d ", fibonacci(i));
    
    return 0;
}

int fibonacci(int index)
{
    int prev1 = 1, prev2 = 1;
    int i;
    int ans;

    if (index < 3)
        ans = 1;
    else
        for (i = 2; i < index; i++)
        {
            ans = prev1 + prev2;
            prev1 = prev2;
            prev2 = ans;
        }

    return ans;
}