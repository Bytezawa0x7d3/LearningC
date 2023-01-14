#include <stdio.h>

struct gas {
    float distance;
    float gals;
    float mpg;
};

float ret_mpg(struct gas info) {return info.distance / info.gals;}

void mk_mpg(struct gas * ptr) {ptr->mpg = ptr->distance / ptr->gals;}