#include <stdio.h>

void main(void)
{
    float height;
    char name[10];

    printf("Please enter your name and height in centimeter: ");
    scanf("%s%f", name, &height);
    printf("%s, you are %.2f meter tall.", name, height / 100.0f);
}