#include <stdio.h>
#include <string.h>
#define NLEN 30

struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

struct namect getinfo(void);
struct namect mkinfo(struct namect info);
void showinfo(struct namect info);
char * s_gets(char * str, int n);


int main(void)
{
    struct namect person;

    person = getinfo();
    person = mkinfo(person);
    showinfo(person);

    return 0;
}


struct namect getinfo(void)
{
    struct namect temp;

    printf("Please enter your first name: ");
    s_gets(temp.fname, NLEN);
    printf("Please enter your last name: ");
    s_gets(temp.lname, NLEN);

    return temp;
}


struct namect mkinfo(struct namect info)
{
    info.letters = strlen(info.fname) + strlen(info.lname);

    return info;
}


void showinfo(struct namect info)
{
    printf("%s %s, your name contains %d letters.\n",
        info.fname, info.lname, info.letters);
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