#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int countword(char str[]);
int analyse(char str[], int * uppernum, int * lowernum, int * punctnum, int * dnum);

int main(void)
{
    char str[30];
    int upnum = 0, lownum = 0, punctnum = 0, dignum = 0;

    fgets(str, 30, stdin);
    analyse(str, &upnum, &lownum, &punctnum, &dignum);
    printf("Word number: %d\n", countword(str));
    printf("Upper letters: %d\n", upnum);
    printf("Lower letters: %d\n", lownum);
    printf("Punctuation number: %d\n", punctnum);
    printf("Digit number: %d\n", dignum);

    return 0;
}


int countword(char str[])
{
    int count = 0;
    bool inword = false;

    while (*str)
    {
        if (isalpha(*str) && !inword)
        {
            inword = true;
            count++;
        }
        else if (!isalpha(*str) && inword)
            inword = false;
        str++;
    }
    
    return count;
}


int analyse(char str[], int * uppernum, int * lowernum, int * punctnum, int * dnum)
{
    while (*str)
    {
        if (isupper(*str))
            (*uppernum)++;
        else if (islower(*str))
            (*lowernum)++;
        else if (ispunct(*str))
            (*punctnum)++;
        else if (isdigit(*str))
            (*dnum)++;
        str++;
    }
}