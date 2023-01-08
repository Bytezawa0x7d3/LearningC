#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 1000


int main(void)
{
    unsigned int seeds[10] = {
        123, 456, 789, 987, 654,
        141, 511, 513, 583, 981
    };
    int i, j;
    
    for (j = 0; j < 10; j++)
    {
        
        int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        srand(seeds[j]);
        for (i = 0; i < NUM; i++)
            count[rand() % 10]++;
        printf("%d %d %d %d %d %d %d %d %d %d\n\n",
                count[0], count[1], count[2], count[3], count[4],
                count[5], count[6], count[7], count[8], count[9]);
    }

    return 0;
}