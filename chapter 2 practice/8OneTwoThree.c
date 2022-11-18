#include <stdio.h>

void one_three(void);
void two(void);

void main()
{
    printf("starting now:\n");
    one_three();
    printf("done!");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}
