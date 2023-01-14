#include <stdio.h>
#include <string.h>

struct fullname {
    char fname[20];
    char lname[20];
};

struct bard {
    struct fullname name;
    int born;
    int died;
};

int main(void)
{
    struct bard willie = {{"None", "None"}, 0, 0};
    struct bard * pt = &willie;

    printf("willie.born = %d\n", willie.born);
    printf("pt->born = %d\n", pt->born);
    scanf("%d", &willie.born);
    scanf("%d", &pt->born);
    scanf("%s", willie.name.lname);
    scanf("%s", pt->name.lname);
    printf("willie.name.fname[2] = %c\n", willie.name.fname[2]);
    printf("strlen(willie.name.fname) + strlen(willie.name.lname) = %d",
        strlen(willie.name.fname) + strlen(willie.name.lname));

    return 0;
}