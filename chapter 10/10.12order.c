#include <stdio.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(void)
{
    int * p1, * p2, * p3;

    p1 = p2 = data;
    p3 = moredata;
    printf("*p1 = %d, *p2 = %d, *p3 = %d.\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d.\n", *p1++, *++p2, (*p3)++);
    printf("*p1 = %d, *p2 = %d, *p3 = %d.\n", *p1, *p2, *p3);

    /* *p1++   先使用p1的值再递增 先找到了p1当前指向的100 之后递增到第二个值200
       *++p2   先递增p2再使用其值 先递增后指向了200 然后找到200并打印
       (*p3)++ 先找到p3指向的值300 再使用 第一次打印了300 使用后再让300递增1 第二次打印301  */

    return 0;
}