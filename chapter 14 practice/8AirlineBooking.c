#include <stdio.h>
#include <string.h>
#define SEATNUM 12

struct seat {
    int num;
    enum {booked, spare} state;
    char fname[10];
    char lname[10];
};

void show_spare_num(const struct seat seats[]);
void show_spare_list(const struct seat seats[]);
void show_booked_alpha_list(const struct seat seats[]);
void assign_customer(struct seat seats[]);
void delete_assignment(struct seat seats[]);
void init_seats(struct seat seats[]);
char * s_gets(char * str, int n);


int main(void)
{
    struct seat seats[SEATNUM];
    char func[2];
    
    init_seats(seats);
    puts("To choose a function, enter its letter label:");
    puts("a) Show number of empty seats");
    puts("b) Show list of empty seats");
    puts("c) Show alphabetical list of seats");
    puts("d) Assigne a customer to a seat assignment");
    puts("e) Delete the seat assignment");
    puts("f) Quit");

    printf("\nEnter your choice of function: ");
    s_gets(func, 2);
    while (func[0] != 'f')
    {
        switch (func[0])
        {
        case 'a':
            show_spare_num(seats);
            break;
        case 'b':
            show_spare_list(seats);
            break;
        case 'c':
            show_booked_alpha_list(seats);
            break;
        case 'd':
            assign_customer(seats);
            break;
        case 'e':
            delete_assignment(seats);
            break;
        default:
            puts("No such function.");
        }
        printf("\nEnter your choice of function again: ");
        s_gets(func, 2);
    }
    printf("Done.");

    return 0;
}


void init_seats(struct seat seats[])
{
    int x;

    for (x = 0; x < SEATNUM; x++)
        seats[x] = (struct seat){x + 1, spare, "\0", "\0"};
}


void show_spare_num(const struct seat seats[])
{
    int spare_num = 0;
    int x;

    for (x = 0; x < SEATNUM; x++)
        if (seats[x].state == spare)
            spare_num++;
    if (spare_num)
        printf("There %s %d spare seat%s.\n",
            (spare_num == 1) ? "is" : "are",
            spare_num,
            (spare_num == 1) ? "\0" : "s");
    else
        puts("All seats are booked by customers.");
}


void show_spare_list(const struct seat seats[])
{
    char isfull = 1;
    int x;

    for (x = 0; x < SEATNUM; x++)
        if (seats[x].state == spare)
        {
            isfull = 0;
            break;
        }
    
    if (isfull)
        puts("All seats are booked by customers.");
    else
    {
        printf("The numbers of spare seats:");
        for (x = 0; x < SEATNUM; x++)
            if (seats[x].state == spare)
                printf(" %d", seats[x].num);
        printf("\n");
    }
}


void show_booked_alpha_list(const struct seat seats[])
{
    const struct seat * seatptrs[SEATNUM];
    const struct seat * temp;
    int booked_seats = 0;
    int x, y;

    for (x = 0; x < SEATNUM; x++)
        if (seats[x].state == booked)
            booked_seats++;
    if (!booked_seats)
    {
        puts("All seats are empty.");
        return;
    }


    for (x = 0, y = 0; x < SEATNUM || y < booked_seats; x++)
        if (seats[x].state == booked)
            seatptrs[y++] = &seats[x];

    for (x = 0; x < booked_seats - 1; x++)
        for (y = x + 1; y < booked_seats; y++)
            if (strcmp(seatptrs[x]->fname, seatptrs[y]->fname) > 0)
            {
                temp = seatptrs[x];
                seatptrs[x] = seatptrs[y];
                seatptrs[y] = temp;
            }
    
    puts("Seat Number     First Name     Last Name");
    for (x = 0; x < booked_seats; x++)
    {
        printf("%11d%15s%14s\n",
            seatptrs[x]->num,
            seatptrs[x]->fname,
            seatptrs[x]->lname);
    }
}


void assign_customer(struct seat seats[])
{
    struct seat temp = {.state = booked};
    
    printf("Enter the first name of the customer (q to quit): ");
    s_gets(temp.fname, 10);
    while (temp.fname[0] != 'q')
    {
        printf("Enter the last name: ");
        s_gets(temp.lname, 10);

        printf("Enter the number of the seat to be assigned to %s %s: ",
            temp.fname, temp.lname);
        scanf("%d", &temp.num);
        while (temp.num < 1 || temp.num > 12)
        {
            printf("Invalid seat number detected. It should be within [1, %d].\n", SEATNUM);
            printf("Enter a new seat number again: ");
            scanf("%d", &temp.num);
        }
        while (getchar() != '\n')
            continue;
        
        if (seats[temp.num - 1].state == spare)
            seats[temp.num - 1] = temp;
        else
            printf("Assignment failed as seat No.%d has already been booked.\n");

        printf("Enter the first name of another customer (q to quit): ");
        s_gets(temp.fname, 10);
    }
}


void delete_assignment(struct seat seats[])
{
    int seat_num;

    printf("Enter the number of the seat to be deleted (-1 to quit): ");
    scanf("%d", &seat_num);
    while (seat_num != -1)
    {
        if (seat_num < 1 || seat_num > 12)
            printf("Seat No.%d does not exist. A valid number should be within [1, %d].\n",
                seat_num, SEATNUM);
        else if (seats[seat_num - 1].state == spare)
            printf("Seat No.%d is not booked.\n", seat_num);
        else
            seats[seat_num - 1].state = spare;
        
        printf("Enter the number of the next seat to be deleted (-1 to quit): ");
        scanf("%d", &seat_num);
    }
    while (getchar() != '\n')
        continue;
}


char * s_gets(char * str, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(str, n, stdin);
    if (ret_val)
    {
        if (find = strchr(str, '\n'))
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}