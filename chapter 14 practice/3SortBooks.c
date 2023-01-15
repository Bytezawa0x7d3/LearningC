#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char * s_gets(char * st, int n);
void show_sorted(struct book library[], int count, void (* sort)(struct book * library[], int count));
void sort_title(struct book * library[], int count);
void sort_value(struct book * library[], int count);

int main(void)
{
    static struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title (empty line to quit): ");
    while (
        count < MAXBKS &&
        s_gets(library[count].title, MAXTITL) && 
        library[count].title[0] != '\0')
    {
        printf("Now enter the author: ");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value: ");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            printf("Enter the next title (empty line to quit): ");
    }

    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf(
                "%s by %s: $%.2f\n",
                library[index].title,
                library[index].author,
                library[index].value
                );
        printf("\nHere is the list sorted by title:\n");
        show_sorted(library, count, sort_title);
        printf("\nHere is the list sorted by value:\n");
        show_sorted(library, count, sort_value);
    }
    else
        printf("No books? Too bad.\n");

    return 0;
}


void show_sorted(struct book library[], int count, void (* sort)(struct book * library[], int count))
{
    struct book * ptrlibrary[count];
    int x;

    for (x = 0; x < count; x++)
        ptrlibrary[x] = &library[x];
    
    sort(ptrlibrary, count);

    for (x = 0; x < count; x++)
        printf("%s by %s: $%.2f\n",
            ptrlibrary[x]->title,
            ptrlibrary[x]->author,
            ptrlibrary[x]->value);
}


void sort_title(struct book * library[], int count)
{
    struct book * temp;
    int x, y;

    for (x = 0; x < count - 1; x++)
        for (y = x + 1; y < count; y++)
            if (strcmp(library[x]->title, library[y]->title) > 0)
            {
                temp = library[x];
                library[x] = library[y];
                library[y] = temp;
            }
}


void sort_value(struct book * library[], int count)
{
    struct book * temp;
    int x, y;

    for (x = 0; x < count - 1; x++)
        for (y = x + 1; y < count; y++)
            if (library[x]->value > library[y]->value)
            {
                temp = library[x];
                library[x] = library[y];
                library[y] = temp;
            }
}


char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}