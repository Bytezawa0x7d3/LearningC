static unsigned long next = 1;
// 具有内部链接的静态变量 程序从运行到结束全程存在
// 每次调用rand0()都被刷新 下次计算结果取决于上次得到的next的值

unsigned int rand0(void)
{
    next = next * 1103515245 + 12345;
    
    return (unsigned int) (next / 65536) % 32767;
}