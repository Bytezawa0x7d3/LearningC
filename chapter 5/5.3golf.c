#include <stdio.h>

int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("                   Cheeta  Tarzan  Jane\n");
    printf("First round score %4d %8d %8d", cheeta, tarzan, jane);
    /* 68是一个有值 表示常量 通过等号运算符将此常量赋给左值jane
       此时jane代表的数据对象在内存中存储了68的二进制位组合
       jane对于tarzan来说是一个右值 将它代表的值通过第二个等号赋给tarzan
       对于cheeta类似 最后三个变量代表的数据对象都存储相同的值 */

    return 0;
}