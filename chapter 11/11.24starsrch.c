#include <stdio.h>
#include <string.h>
#define LISTSIZE 6

int main(void)
{
    const char * list[LISTSIZE] = 
    {
        "astronomy",
        "astounding",
        "astrophysics",
        "ostracize",
        "asterism",
        "astrophobia"
    };
    int count = 0;
    int i;

    for (i = 0; i < LISTSIZE; i++)
        if (strncmp(list[i], "astro", 5) == 0)
        // 第三个参数为5 意为只比较前5个字符是否相同
        {
            printf("Found %s\n", list[i]);
            count++;
        }
    printf("The list contained %d words beginning with 'astro'.", count);

    return 0;
}