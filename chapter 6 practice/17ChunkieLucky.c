#include <stdio.h>

int main(void)
{
    double money = 1000000.0;
    double rate = 0.08;
    double decrease = 100000;
    double increase;
    int year;

    printf("           Year       Increase       Decrease         Remain\n");
    for (year = 1; money >= 0; year++)
    {
        increase = money * rate;
        money += increase;
        money -= decrease;
        printf("%15d%15lf%15lf%15lf\n", year, increase, decrease, money);
    }
    printf("There will be no money after %d years.", year - 1);

    return 0;
}