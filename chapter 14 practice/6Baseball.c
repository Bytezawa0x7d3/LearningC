#include <stdio.h>
#include <string.h>

struct player {
    int number;
    char fname[10];
    char lname[10];
    int appear;
    int hit;
    int walk;
    int point;
    float rate;
};
enum setmode {append, accumulate};
enum setmode setmember(struct player players[], char * line, int n);
void addrate(struct player players[], int n);


int main(void)
{
    struct player players[3];
    char line[40];
    int add_index = 0;
    int x;
    enum setmode mode;
    FILE * playerinfo = fopen("6PlayerInfo.txt", "r");

    rewind(playerinfo);
    while (fgets(line, 40, playerinfo) != NULL)
    {
        mode = setmember(players, line, add_index);
        if (mode == append)
            add_index++;
        else if (mode == accumulate)
            continue;
    }
    addrate(players, add_index);

    for (x = 0; x < add_index; x++)
        printf("%d %s %s %d %d %d %d %f\n",
            players[x].number,
            players[x].fname,
            players[x].lname,
            players[x].appear,
            players[x].hit,
            players[x].walk,
            players[x].point,
            players[x].rate);
    
    fclose(playerinfo);

    return 0;
}


enum setmode setmember(struct player players[], char * line, int add_index)
{
    struct player temp;
    int x;

    sscanf(line, "%d %s %s %d %d %d %d",
        &temp.number,
        temp.fname,
        temp.lname,
        &temp.appear,
        &temp.hit,
        &temp.walk,
        &temp.point);

    for (x = 0; x < add_index; x++)
        if (players[x].number == temp.number)
            break;
    
    if (x == add_index)
    {
        players[add_index] = temp;
        return append;
    }
    else
    {
        players[x].appear += temp.appear;
        players[x].hit += temp.hit;
        players[x].walk += temp.walk;
        players[x].point += temp.point;
        return accumulate;
    }
}


void addrate(struct player players[], int n)
{
    int x;

    for (x = 0; x < n; x++)
            players[x].rate = (float) players[x].hit / players[x].appear;
}