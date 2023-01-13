#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char * s_gets(char * str, int n);


int main(void)
{
    struct book library[MAXBKS]; // 结构数组
    int count = 0;
    int index, filecount;
    FILE * pbooks; // 文件流指针
    int size = sizeof(struct book); // 结构的大小（字节）

    if ((pbooks = fopen("book.dat", "a+b")) == NULL)
    {   
        // 打开文件失败则报错退出
        fputs("Can't open book.dat file.\n", stderr);
        exit(1);
    }

    rewind(pbooks); // 定位到文件开始
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n",
            library[count].title, library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }

    puts("\nPlease add new book titles (enter empty line to stop): ");
    while (
        count < MAXBKS &&
        s_gets(library[count].title, MAXTITL) != NULL &&
        library[count].title[0] != '\0'
        )
    {
        puts("Now enter the author: ");
        s_gets(library[count].author, MAXAUTL);
        puts("Now enter the value: ");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            puts("\nEnter the next title (empty line to quit): ");
    }

    if (count > 0)
    {
        puts("Here is the list of your books:");
        for (index = 0; index < count; index++)
            printf(
                "%s by %s: $%.2f\n",
                library[index].title,
                library[index].author,
                library[index].value
            );
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }
    else
        puts("No books? Too bad.");
    
    puts("Done.");
    fclose(pbooks);

    return 0;
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