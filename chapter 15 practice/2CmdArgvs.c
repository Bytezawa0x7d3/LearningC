#include <stdio.h>
#include <string.h>

unsigned int strtoint(char * str);
char * inttostr(unsigned int num, char * str, size_t len);

int main(int argc, char * argv[])
{
    unsigned int argv_1 = strtoint(argv[1]);
    unsigned int argv_2 = strtoint(argv[2]);
    char result[strlen(argv[1]) + 1];
    
    printf("~%s = %s\n", argv[1], inttostr(~argv_1, result, strlen(argv[1])));
    printf("~%s = %s\n", argv[2], inttostr(~argv_2, result, strlen(argv[2])));
    printf("%s & %s = %s\n", argv[1], argv[2], inttostr(argv_1 & argv_2, result, strlen(argv[1])));
    printf("%s | %s = %s\n", argv[1], argv[2], inttostr(argv_1 | argv_2, result, strlen(argv[1])));
    printf("%s ^ %s = %s\n", argv[1], argv[2], inttostr(argv_1 ^ argv_2, result, strlen(argv[1])));

    return 0;
}


unsigned int strtoint(char * str)
{
    unsigned int retval = 0;
    size_t len = strlen(str);
    int i;

    for (i = 0; i < len; i++)
        if (str[i] == '1')
            retval |= (1 << (len - i - 1));
    
    return retval;
}


char * inttostr(unsigned int num, char * str, size_t len)
{
    unsigned int mask = 1;
    int i;

    for (i = len - 1; i >= 0; i--, mask <<= 1)
        if ((num & mask) == mask)
            str[i] = '1';
        else
            str[i] = '0';
    str[len] = '\0';

    return str;
}