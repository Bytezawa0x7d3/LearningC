#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt(char * strings[], int num);
char * s_gets(char * st, int n);


int main(void)
{
    char input[LIM][SIZE];
    char * ptstr[LIM];
    int ct = 0;
    int k;

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct]; // 让指针数组的每个指针 指向每个字符串
        ct++;
    }
    stsrt(ptstr, ct); // 对指针进行排序 而非字符串
    /* 程序将指针数组重新排列 并未改变input二维数组的内容
       这样做比用strcpy()函数复制数组要更快速 */
    puts("Here's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);

    return 0;
}


void stsrt(char * strings[], int num)
{
    char * temp;
    int top, seek;

    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}


char * s_gets(char * st, int n)
{
    char * find;
    char * ret_val;

    ret_val = fgets(st, n, stdin);
    find = strchr(st, '\n');
    if (find)
        *find = '\0';
    else
        while (getchar() != '\n')
            continue;
    
    return ret_val;
}