#include <stdio.h>

void main(void)
{
    float age;
    printf("Please enter your age: ");
    scanf("%f", &age);
    printf("Your age in second is: %f", age * 3.156e7f);
}