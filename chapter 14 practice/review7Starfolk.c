#include <stdio.h>
#include "review7Starfolk.h"

void show(struct bem * ptbem);


int main(void)
{
    struct bem deb = {
        6,
        {"Berbnazel", "Gwolkapwolk"},
        "Arcturan"
    };
    struct bem * ptr = &deb;

    show(ptr);

    return 0;
}


void show(struct bem * ptbem)
{
    printf("%s %s is a %d-limbed %s.",
        ptbem->title.first,
        ptbem->title.last,
        ptbem->limbs,
        ptbem->type);
}