#include <stdio.h>
#include <stdbool.h>

struct character {
    unsigned int id : 8;
    unsigned int size : 7;
    unsigned int alignment : 2;
    bool bold : 1;
    bool italic : 1;
    bool underline : 1;
};

void show(struct character * info);
void get_choice(unsigned char * choice);


int main(void)
{
    unsigned char input;
    struct character info = {
        1, 12, 0, 0, 0, 0
    };
    
    show(&info);
    get_choice(&input);
    while (input != 'q')
    {
        switch (input)
        {
        case 'f':
            printf("Enter font id (0-255): ");
            scanf("%d", &input);
            while (getchar() != '\n')
                continue;
            info.id = input;
            break;
        case 's':
            printf("Enter font size (0-127): ");
            scanf("%d", &input);
            while (getchar() != '\n')
                continue;
            info.size = input;
            break;
        case 'a':
            puts("Select alignment:");
            puts("l) left     c) center     r) right");
            get_choice(&input);
            if (input == 'l')
                info.alignment = 0;
            else if (input == 'c')
                info.alignment = 1;
            else if (input == 'r')
                info.alignment = 2;
            break;
        case 'b':
            info.bold = (info.bold == 1) ? 0 : 1;
            break;
        case 'i':
            info.italic = (info.italic == 1) ? 0 : 1;
            break;
        case 'u':
            info.underline = (info.underline == 1) ? 0 : 1;
            break;
        default:
            puts("Unknown input detected.");
        }
        show(&info);
        get_choice(&input);
    }
    puts("Bye.");

    return 0;
}


void show(struct character * info)
{
    printf(" ID SIZE ALIGNMENT   B   I   U\n");
    printf("%3d%5d%7s%7s%4s%4s\n\n",
        info->id,
        info->size,
        (info->alignment == 0) ? "  left" : ((info->alignment == 1) ? "center" : " right"),
        info->bold == 1 ? " on" : "off",
        info->italic == 1 ? " on" : "off",
        info->underline == 1 ? " on" : "off");

    puts("f) change font     s) change size     a) change alignment");
    puts("b) toggle bold     i) toggle italic   u) toggle underline");
    puts("q) quit");
}


void get_choice(unsigned char * choice)
{
    *choice = getchar();
    while (getchar() != '\n')
        continue;
}