#include <stdio.h>

void showmenu(void);
int getchoice(int uplim, int lowlim);

int main(void)
{
    int lowlim = 1, uplim = 4;
    int choice;

    showmenu();
    while ((choice = getchoice(uplim, lowlim)) != uplim)
    {
        switch (choice)
        {
            case 1:
                printf("copy files\n");
                break;
            case 2:
                printf("move files\n");
                break;
            case 3:
                printf("remove files\n");
                break;
        }
        showmenu();
    }
    printf("quit");

    return 0;
}

void showmenu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files           2) move files\n");
    printf("3) remove files         4) quit\n");
    printf("Enter the number of your choice: ");
}

int getchoice(int uplim, int lowlim)
{
    int choice;
    int readin;

    while (1)
    {
        readin = scanf("%d", &choice);
        if (readin != 1)
            return uplim;
        else if (choice < lowlim || choice > uplim)
            showmenu();
        else
            return choice;
    }
}