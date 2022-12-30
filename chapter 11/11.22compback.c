#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("strcmp(\"A\", \"A\") returns %d.\n", strcmp("A", "A")); // 0
    printf("strcmp(\"A\", \"B\") returns %d.\n", strcmp("A", "B")); // -1
    printf("strcmp(\"B\", \"A\") returns %d.\n", strcmp("B", "A")); // 1
    printf("strcmp(\"C\", \"A\") returns %d.\n", strcmp("C", "A")); // 1
    printf("strcmp(\"Z\", \"a\") returns %d.\n", strcmp("Z", "a")); // -1
    printf("strcmp(\"apples\", \"apple\") returns %d.\n", strcmp("apples", "apple")); // 1

    return 0;
}