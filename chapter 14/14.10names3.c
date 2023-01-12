#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81

struct namect {
    char * fname;
    char * lname;
    int letters;
};

void getinfo(struct namect * pst);
void mkinfo(struct namect * pst);
void showinfo(struct namect * pst);
void cleanup(struct namect * pst);
char * s_gets(char * str, int n);


int main(void)
{
    struct namect person;

    getinfo(&person);
    mkinfo(&person);
    showinfo(&person);
    cleanup(&person);

    return 0;
}


void getinfo(struct namect * pst)
{
    char temp[SLEN];

    printf("Please enter your first name: ");
    s_gets(temp, SLEN);
    pst->fname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->fname, temp);
    printf("Please enter your last name: ");
    s_gets(temp, SLEN);
    pst->lname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}


void mkinfo(struct namect * pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}


void showinfo(struct namect * pst)
{
    printf("%s %s, your name contains %d letters.\n",
        pst->fname, pst->lname, pst->letters);
}


void cleanup(struct namect * pst)
{
    free(pst->fname);
    free(pst->lname);
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