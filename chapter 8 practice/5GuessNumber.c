#include <stdio.h>

int main(void)
{
    int min = 0;
    int max = 100;
    int guess = (min + max) / 2;
    int prev;
    char response;

    printf("Pick an integer from %d to %d. I will try to guess it.\n", min, max);
    printf("Respond with a 'y' if my guess is right.\n");
    printf("Respond with an 'l' if my guess is lower than your integer.\n");
    printf("Respond with an 'H' if my guess is lower than your integer.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {   
        if (response == 'l')
        {
            min = guess;
            printf("Well, then, is it %d?\n", guess += (max - guess) / 2);
        }
        else if (response == 'h')
        {
            max = guess;
            printf("Well, then, is it %d?\n", guess -= (guess - min) / 2);
        }
        else
            printf("Sorry, I understand only 'y' or 'n'.\n");
        while (getchar() != '\n')
            continue;
    }
    printf("I know I could do it!");

    return 0;
}