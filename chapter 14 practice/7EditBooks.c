#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define FILENAME "7Records.dat"
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 5

enum datastate {deleted, exist};

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
    enum datastate state;
};

char * s_gets(char * str, int n);
void init_library(struct book library[]);
void init_records(const struct book library[], FILE * records);
void load_records(struct book library[], FILE * records);
void show_lilbrary(const struct book library[]);
int get_insert_index(const struct book library[]);
void add_book(struct book library[], FILE * records);
void del_book(struct book library[], FILE * records);


int main(void)
{
    struct book library[MAXBKS];
    FILE * records;
    char cmd[2];

    
    if ((records = fopen(FILENAME, "r+b")) == NULL)
    {
        printf("[WARN] Cannot open file \"%s\".\n", FILENAME);
        printf("[INFO] Initialize library data and file content.\n\n");
        records = fopen(FILENAME, "wb");
        init_library(library);
        init_records(library, records);
        fclose(records);
        records = fopen(FILENAME, "r+b");
    }
    else
        load_records(library, records);

    puts("[INFO] s) show book list     a) add book     d) delete book     q) quit after save");
    printf("[INPT] Enter the letter as one of commands above: ");
    s_gets(cmd, 2);
    while (cmd[0] != 'q')
    {
        switch (cmd[0])
        {
        case 's':
            show_lilbrary(library);
            break;
        case 'a':
            add_book(library, records);
            break;
        case 'd':
            del_book(library, records);
            break;
        default:
            puts("[WARN] No such command.");
        }
        puts("\n[INFO] s) show book list   a) add book   d) delete book   q) quit after save");
        printf("[INPT] Enter the letter as one of commands above: ");
        s_gets(cmd, 2);
    }
    puts("[INFO] Exit.");
    fclose(records);

    return 0;
}


void init_library(struct book library[])
{
    int x, y;

    for (x = 0; x < MAXBKS; x++)
    {
        for (y = 0; y < MAXTITL; y++)
            library[x].title[y] = '\0';
        for (y = 0; y < MAXAUTL; y++)
            library[x].author[y] = '\0';
        library[x].value = 0.0;
        library[x].state = deleted;
    }
}


void init_records(const struct book library[], FILE * records)
{
    int x;

    fseek(records, 0L, SEEK_SET);
    for (x = 0; x < MAXBKS; x++)
        fwrite(&library[x], sizeof(struct book), 1, records);
}


void load_records(struct book library[], FILE * records)
{
    int x;

    fseek(records, 0L, SEEK_SET);
    for (x = 0; x < MAXBKS; x++)
        fread(&library[x], sizeof(struct book), 1, records);
}


void show_lilbrary(const struct book library[])
{
    int x;
    char is_empty = 1;
    
    puts("\n[INFO] Here is the book list:");
    for (x = 0; x < MAXBKS; x++)
        if (library[x].state == exist)
        {
            is_empty = 0;
            break;
        }
    
    if (is_empty)
    {
        puts("       No book list recorded.");
        return ;
    }

    for (x = 0; x < MAXBKS; x++)
        if (library[x].state == exist)
            printf("       %s by %s: $%.2f\n",
                library[x].title,
                library[x].author,
                library[x].value);
}


int get_insert_index(const struct book library[])
{
    int x;

    for (x = 0; x < MAXBKS; x++)
        if (library[x].state == deleted)
            break;
    
    return x;
}


void add_book(struct book library[], FILE * records)
{
    int index = get_insert_index(library);

    if (index == MAXBKS)
    {
        puts("[FAIL] List is full. Try to delete some existing records before addition.");
        return ;
    }

    printf("[INPT] Book title: ");
    s_gets(library[index].title, MAXTITL);
    printf("[INPT] Name of the author: ");
    s_gets(library[index].author, MAXAUTL);
    printf("[INPT] Book value: ");
    scanf("%f", &library[index].value);
    while (library[index].value == 0.0)
    {
        printf("[INPT] Please enter numerical characters as book value: ");
        scanf("%f", &library[index].value);
    }
    while (getchar() != '\n')
        continue;
    library[index].state = exist;

    fseek(records, (long)(index * sizeof(struct book)), SEEK_SET);
    fwrite(&library[index], sizeof(struct book), 1, records);
}


void del_book(struct book library[], FILE * records)
{
    char title[MAXTITL];
    int index;

    printf("[INPT] Enter the title of the book to be deleted: ");
    s_gets(title, MAXTITL);

    for (index = 0; index < MAXBKS; index++)
        if (strcmp(library[index].title, title) == 0)
            break;
    
    if (index == MAXBKS)
    {
        printf("[FAIL] There is no book with title \"%s\".\n", title);
        return ;
    }

    library[index].state = deleted;
    fseek(records,
        (long)(index * sizeof(struct book) + sizeof(char [MAXTITL]) + 
        sizeof(char [MAXAUTL]) + sizeof(float)),
        SEEK_SET);
    fwrite(&library[index].state, sizeof(enum datastate), 1, records);
}


char * s_gets(char * str, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(str, n, stdin);
    if (ret_val)
    {
        if (find = strchr(str, '\n'))
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}