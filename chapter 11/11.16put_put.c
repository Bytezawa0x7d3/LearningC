#include <stdio.h>

void put1(const char *);
int put2(const char *);


int main(void)
{
     put1("If I'd as much money"); // 没有自动换行的输出函数
     put1(" as I could spend,\n");
     printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));
     // 先求参数的值 所以先执行put2()再输出printf()的字符

     return 0;
}


void put1(const char * string)
{
     while (*string)  /* 与 *string != '\0' 相同 */
          putchar(*string++);
}


int put2(const char * string)
{
     int count = 0;
     while (*string)
     {
          putchar(*string++);
          count++;
     }
     putchar('\n');

     return(count);
}