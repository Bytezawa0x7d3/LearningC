#include <stdio.h>
#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;

    pti = dates;
    ptf = bills;
    printf("%21s %11s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    
    return 0;
}

/*

                short      double
pointers + 0:  3a7fffdf0  3a7fffdd0
pointers + 1:  3a7fffdf2  3a7fffdd8
pointers + 2:  3a7fffdf4  3a7fffde0
pointers + 3:  3a7fffdf6  3a7fffde8

C中的指针+1意思是增加一个存储单元
此处两个指针都指向数组的首元素
所以此处short指针+1 地址值+2 越过16位到下一个存储单元 因为short类型宽度为16
double指针+1 地址值+8 越过64位到下一个存储单元 因为double类型宽度为64

*/