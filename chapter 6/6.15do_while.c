#include <stdio.h>

int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!");

    /* 使用出口条件循环 exit-condition  loop
       每次在循环代码块结束时对测试条件求值 决定是否再次进行循环
       出口条件循环的代码块至少会执行一次 */

    return 0;
}