#include <stdio.h>
const int S_PER_M = 60; // 60秒每分钟
const int S_PER_H = 3600; // 3600秒每小时
const double M_PER_K = 0.62137; // 0.62137英里每公里

int main(void)
{
    double distk, distm; // 移动的距离 分别以公里和英里为单位
    double rate; // 平均速度 英里每小时
    int min, sec; // 移动用时 以分钟和秒为单位
    int time; // 移动用时 以秒为单位
    double mtime; // 移动1英里用时 以秒为单位
    int mmin, msec; // 移动1英里用时 以分钟和秒为单位

    printf("This program converts your time for a matric race\n");
    printf("to a time fro running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run: ");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes: ");
    scanf("%d", &min);
    printf("Now enter the seconds: ");
    scanf("%d", &sec);

    time = S_PER_M * min + sec; // 将输入的分钟和秒转换为秒
    distm = distk * M_PER_K; // 将输入的以千米为单位的距离转换为以英里为单位的距离
    rate = distm / time * S_PER_H; // 计算平均速度 英里每小时
    mtime = (double)time / distm; // 移动一英里用时
    mmin = (int)mtime / S_PER_M; // 移动一英里使用的分钟数
    msec = (int)mtime % S_PER_M; // 剩余的秒数

    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n", distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ", mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.", msec, rate);

    return 0;
}