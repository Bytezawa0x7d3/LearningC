#include <stdio.h>


void func1(void) {puts("func1() is called.");}
void func2(void) {puts("func2() is called.");}
void func3(void) {puts("func3() is called.");}
void func4(void) {puts("func4() is called.");}


int main(void)
{
    void (* funcs[4])(void) = {func1, func2, func3, func4};
    int select;

    printf("Enter your selection of function: ");
    scanf("%d", &select);
    funcs[select]();

    return 0;
}