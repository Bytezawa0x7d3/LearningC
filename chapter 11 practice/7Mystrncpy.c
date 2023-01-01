#include <stdio.h>

char * mystrncpy(char s1[], char s2[], int n);

int main(void)
{
    char s1[11];
    char s2[] = "Yeegeewowl";

    mystrncpy(s1, s2, 11);
    puts(s1);

    return 0;
}

char * mystrncpy(char s1[], char s2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        s1[i] = s2[i];
    
    return s1;
}