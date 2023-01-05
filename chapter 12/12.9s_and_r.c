static unsigned long int next = 1;
// 变量next具有内部链接
// 该文件内所有函数都可使用它
// 其他编译单元的函数则不能

int rand1(void)
{
    next = next * 1103515245 + 12345; // 根据当前next计算新的next
    
    return (unsigned int) (next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
    next = seed; // 根据参数手动设置next的值
}