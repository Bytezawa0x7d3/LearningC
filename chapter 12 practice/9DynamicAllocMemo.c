#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

char * getword(int lim);


int main(void)
{
    int num;
    int i;
    char * * words;

    printf("How many words do you wish to enter: ");
    scanf("%d", &num);
    words = malloc(num * (sizeof(char *)));
    // dynamically allocate memory according to number of words
    // words is a pointer pointing to a pointer pointing to a char variable

    printf("Enter %d words now: ", num);
    for (i = 0; i < num; i++)
        words[i] = getword(10);
    // read corresponding number of words
    // store the pointers pointing to provided words
    
    printf("Here are your words:\n");
    for (i = 0; i < num; i++)
    {
        fputs(words[i], stdout); //print each word in shell
        if (strchr(words[i], '\n') == NULL)
            printf("\n"); // start a new line manually if there is no '\n' in word readed
    }

    for (i = 0; i < num; i++)
        free(words[i]); // free memory of each char pointer
    free(words); // free memory of all sub-pointers by providing the pointer pointer to free()

    return 0;
}

char * getword(int lim)
{
    char temp[lim];
    char * word;
    bool inword = false;
    int i = 0;

    while (i < lim - 1)
    {
        if (isalpha(temp[i] = getchar()) && !inword)
        {   
            inword = true;
            i++;
        }
        else if (isalpha(temp[i]) && inword)
            i++;
        else if (isspace(temp[i]) && inword)
        {
            temp[i] = '\0';
            break;
        }
    }
    if (i == lim - 1)
        temp[i] = '\0';

    word = malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(word, temp);

    return word;
}