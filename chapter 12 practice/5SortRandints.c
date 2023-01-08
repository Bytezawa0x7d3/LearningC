#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 100


int main(void)
{
    int randints[LEN]; // array for storage of 100 random integers
    int x, y; // for loop counters
    int temp; // for sorting random integers

    srand((unsigned int)time(0)); // set the seed according to system time
    for (x = 0; x < LEN; x++)
        randints[x] = rand() % 10 + 1; // get 100 random integers within [1, 10]
    
    for (x = 0; x < LEN - 1; x++)
        for (y = x + 1; y < LEN; y++)
            if (randints[y] > randints[x]) // sort integers
            {
                temp = randints[x];
                randints[x] = randints[y];
                randints[y] = temp;
            }
    
    for (x = 0; x < LEN; x++) // show results
        printf("%d\n", randints[x]);
    
    return 0;
}