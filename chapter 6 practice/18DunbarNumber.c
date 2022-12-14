#include <stdio.h>

int main(void)
{
    int friends = 5;
    int week;

    printf("      Week   Friends\n");
    for (printf("%10d%10d\n", 0, 5), week = 1;
         friends -= week, friends *= 2, friends <= 150; week++)
        printf("%10d%10d\n", week, friends);
    printf("%10d%10d\n", week, friends);

    return 0;    
}