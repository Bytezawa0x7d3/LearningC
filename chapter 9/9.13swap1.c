#include <stdio.h>

void interchange(int u, int v);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d", x, y);
    /* main()函数的局部变量x与y的值实际上并未被交换
       因为传参给interchange()时只是将main()提供的实参的值拷贝了过去
       在interchange()内部修改了它自己局部变量u和v的值
       对main()的x和y根本没有改变 */

    return 0;
}

void interchange(int u, int v)
{
    int temp;

    temp = u;
    u = v;
    v = temp;
}