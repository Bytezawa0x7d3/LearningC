#include <stdio.h> // 大小于号表示编译器提供的头文件
#include "9.11hotel.h" // 双引号表示头文件于该源码文件位于同文件夹中
/* gcc file1.c file2.c -o test.exe
   使用以上指令用GCC编译器编译多个c源码文件至一个可执行文件 */

int main(void)
{
    int nights;
    double hotel_rate;
    int code;

    while ((code = menu()) != QUIT)
    // menu()函数和QUIT符号常量在其他文件中定义
    {
        switch (code)
        // 根据输入值设置费率
        {
            case 1:
                hotel_rate = HOTEL1;
                break;
            case 2:
                hotel_rate = HOTEL2;
                break;
            case 3:
                hotel_rate = HOTEL3;
                break;
            case 4:
                hotel_rate = HOTEL4;
                break;
            default:
                hotel_rate = 0.0;
                printf("Oops!\n");
                break;
        }
        nights = getnights();
        showprice(hotel_rate, nights);
    }
    printf("Thank you and goodbye.\n");

    return 0;
}