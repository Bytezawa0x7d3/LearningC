#include <stdio.h>

int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle: ");
    while (scanf("%f", &length) == 1)
    {
        printf("Enter the width: ");
        if (scanf("%f", &width) != 1)
            break; // 如果没有成功读取到宽度 通过break直接跳出循环
        printf("Length = %f, width = %f, area = %f\n",
                length, width, length * width);
        printf("Enter the length of the next rectangle: ");
    }
    printf("Done.");

    return 0;
}