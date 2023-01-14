#include <stdio.h>

typedef struct lens {
    float foclen;
    float fstop;
    char brand[30];
} LENS;

int main(void)
{
    LENS camera_lens[10] = {[2] = {500, 2.0, "Remarkata"}};

    printf("%s %gmm f%g",
        camera_lens[2].brand,
        camera_lens[2].foclen,
        camera_lens[2].fstop);

    return 0;
}