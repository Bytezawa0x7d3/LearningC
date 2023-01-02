#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 30
#define LIM 10

void show_ascii(char strs[][SIZE], int n);
void show_wdlen(char strs[][SIZE], int n);
void show_len(char strs[][SIZE], int n);
void show_origin(char str[][SIZE], int n);
int getwdlen(char str[]);
int getstrs(char strs[][SIZE], int n);
void getselect(char * input);



int main(void)
{
    char strs[LIM][SIZE];
    char input;
    int strnum;

    printf("Input %d strings (EOF to end input):\n", LIM);
    strnum = getstrs(strs, LIM);
    puts("1) Origin     2) ASCII");
    puts("3) Length     4) First word length");
    puts("5) Quit");
    while (getselect(&input), input != '5')
    {
        switch (input)
        {
        case '1':
            show_origin(strs, strnum);
            break;
        case '2':
            show_ascii(strs, strnum);
            break;
        case '3':
            show_len(strs, strnum);
            break;
        case '4':
            show_wdlen(strs, strnum);
            break;
        default:
            puts("The input value is invalid. Try again.");
        }
        puts("\n1) Origin     2) ASCII");
        puts("3) Length     4) First word length");
        puts("5) Quit");
    }

    return 0;
}


int getstrs(char strs[][SIZE], int n)
{
    int i;
    char * find;

    for (i = 0; fgets(strs[i], SIZE, stdin) && i < n; i++)
    {
        if (find = strchr(strs[i], '\n'))
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return i;
}


void show_ascii(char strs[][SIZE], int n)
{
    char * ptrs[n];
    char * temp;
    int x, y;

    for (x = 0; x < n; x++)
        ptrs[x] = strs[x];
    
    for (x = 0; x < n - 1; x++)
    {
        for (y = x + 1; y < n; y++)
        {
            if (strcmp(ptrs[x], ptrs[y]) > 0)
            {
                temp = ptrs[x];
                ptrs[x] = ptrs[y];
                ptrs[y] = temp;
            }
        }
    }

    printf("Show %d strings sorted according to ASCII value:\n", n);
    for (x = 0; x < n; x++)
        puts(ptrs[x]);
}


void show_wdlen(char strs[][SIZE], int n)
{
    char * ptrs[n];
    char * temp;
    int x, y;
    int top_wdlen, seek_wdlen;

    for (x = 0; x < n; x++)
        ptrs[x] = strs[x];
    
    for (x = 0; x < n - 1; x++)
    {
        top_wdlen = getwdlen(ptrs[x]);
        for (y = x + 1; y < n; y++)
        {
            seek_wdlen = getwdlen(ptrs[y]);
            if (seek_wdlen < top_wdlen)
            {
                temp = ptrs[x];
                ptrs[x] = ptrs[y];
                ptrs[y] = temp;
            }
        }
    }

    printf("Show %d strings sorted according to length of the first word:\n", n);
    for (x = 0; x < n; x++)
        puts(ptrs[x]);
}


void show_len(char strs[][SIZE], int n)
{
    char * ptrs[n];
    char * temp;
    int x, y;

    for (x = 0; x < n; x++)
        ptrs[x] = strs[x];
    
    for (x = 0; x < n - 1; x++)
    {
        for (y = x + 1; y < n; y++)
        {
            if (strlen(ptrs[x]) < strlen(ptrs[y]))
            {
                temp = ptrs[x];
                ptrs[x] = ptrs[y];
                ptrs[y] = temp;
            }
        }
    }

    printf("Show %d strings sorted according to length:\n", n);
    for (x = 0; x < n; x++)
        puts(ptrs[x]);
}


void show_origin(char str[][SIZE], int n)
{
    int i;

    for (i = 0; i < n; i++)
        puts(str[i]);
}


int getwdlen(char str[])
{   
    int i;
    int count = 0;
    bool inword = false;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]) && !inword)
            inword = true;
        else if (isspace(str[i]) && inword)
            break;
        if (inword)
            count++;
    }
    
    return count;
}

void getselect(char * input)
{
    *input = getchar();

    while (getchar() != '\n')
        continue;
}