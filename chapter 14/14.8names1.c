#include <stdio.h>
#include <string.h>
#define NLEN 30

struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};


char * s_gets(char * str, int n);
void getinfo(struct namect * pst);
void mkinfo(struct namect *pst);
void showinfo(const struct namect *);


int main(void)
{
    struct namect person;

    getinfo(&person); // 通过指针修改main中变量回传信息
    mkinfo(&person); // 通过指针访问和修改main中变量来双向传递信息
    showinfo(&person); // 通过指针访问main中变量来读取信息

    return 0;
}


void getinfo(struct namect * pst)
{
    printf("Please enter your first name: ");
    s_gets(pst->fname, NLEN);
    printf("Please enter your last name: ");
    s_gets(pst->lname, NLEN);
}


void mkinfo(struct namect * pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}


void showinfo(const struct namect * pst)
{
    printf("%s %s, your name contains %d letters.\n",
        pst->fname, pst->lname, pst->letters);
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