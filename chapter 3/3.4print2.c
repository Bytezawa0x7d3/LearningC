#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    /* 用%d（有符号整数转换说明）告诉printf输出实际上无符号的整数类型
       无符号的待打印值此时大于有符号整数的表示范围
       于是实际值3000000000输出为-1294967296
       因为这两个数在内存中的位组合一模一样
       使用不同的转换说明会让printf采用不同解码方式对待 
       进而产生意想不到的其他输出内容 
       
       如果无符号待打印值的范围在有符号整数的表示范围内
       则采用哪种转换说明都会输出实际值 因为没有影响到符号位 */

    printf("end = %hd and %d\n", end, end);
    /* 用%d输出短整数类型 与用对应转换说明产生同样的准确输出
       因为编译器自动将short类型在传参时自动转换为int类型
       编译器自动转换 因为int类型是计算机处理整数类型时最高效的类型 */

    printf("big = %ld and not %hd\n", big, big);
    /* 使用%hd十进制输出long类型 会截断前十六位 只解码输出后16位 
       65537的三十二位二进制是00000000000000010000000000000001 
       因此后16位的十进制解码输出为1 */

    printf("verybig = %lld and not %ld", verybig, verybig);
    /* %ld只读取解码显示变量的后32位
       因此long long整数类型verybig的前32位在%ld的指引下被舍弃
       而%lld能正确读取所有64位内容
       前者正确显示 后者输出了后32位的十进制值*/

    return 0;
}


// ***使用printf()时切记检查每个待打印值都有对应的、正确的转换说明***


/*

如果系统的int和long占位数相同 不加l前缀也可输出long长整数类型
%d - int 普通整数类型 十进制输出
%o - int 普通整数类型 八进制输出
%x - int 普通整数类型 十六进制输出

l 长整数转换说明前缀
%ld - long 长整数类型 十进制输出
%lo - long 长整数类型 八进制输出
%lx - long 长整数类型 十六进制输出
%lu - unsigned long 无符号长整数类型 十进制输出

ll 超长整数转换说明前缀
%lld - long long 超长整数类型 十进制输出
%llo - long long 超长整数类型 八进制输出
%llx - long long 超长整数类型 十六进制输出
%llu - unsigned long long 无符号超长整数类型 十进制输出

h 短整数转换说明前缀
%hd - short 短整数类型 十进制数输出
%ho - short 短整数类型 八进制输出
%hx - short 短整数类型 十六进制输出
%hu - unsigned short 无符号短整数类型 十进制输出

*/