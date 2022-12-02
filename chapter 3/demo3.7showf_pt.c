#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    printf("And it is %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}

// %f float和double浮点数 十进制显示
// %e float和double浮点数 十进制的指数计数法显示
// %a %A float和double浮点数 十六进制P计数法显示
// %Lf %Le %La long double类型的十进制、指数计数法、十六进制P计数法显示

