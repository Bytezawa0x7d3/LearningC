#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
        up_and_down(n + 1);
    printf("Level %d: n location %p\n", n, &n);
}

/* 

Level 1: n location 000000d92cfff770
Level 2: n location 000000d92cfff740
Level 3: n location 000000d92cfff710
Level 4: n location 000000d92cfff6e0
Level 4: n location 000000d92cfff6e0
Level 3: n location 000000d92cfff710
Level 2: n location 000000d92cfff740
Level 1: n location 000000d92cfff770

前4行level1-4是由main中调用函数up_and_down导致
第一次调用传入了参数1 所以第一行为level1
由于n小于4所以进入了函数内的if
在此处将n的值+1后调用了自身 产生了level2
以下level3和level4都是因此产生

当4被传递给up_and_down之后 if的测试条件并不满足
它在第一个printf之后没有进入if再次递归
而是直接执行了第二个printf 因此中间有两个level4
此时位于第四级调用的函数结束
控制权返回给主调函数 即位于第三级的up_and_down
第三级的up_and_down的下一行语句是printf
所以会再一次打印出level3 随后控制权交给第二级的函数
level2和level1的产生也是因为相同原理

相同level的n的地址相同
因为每一级递归的函数的变量n都是自己私有的
虽然变量名相同 但实际上是占用不同地址的两个变量

用函数调用链的思想解释为
func1()调用func2()
func2()调用func3()
func3()调用func4()
func4()不再次调用 而是结束后将控制权交给func3()
func3()得到控制权执行完剩余语句后结束 控制权交给func2()
func2()结束后控制权交给func1()
func1()结束后控制权交给最初调用该函数的主调函数
对于递归来说 func1() func2() func3() func4() 都是相同的函数

*/