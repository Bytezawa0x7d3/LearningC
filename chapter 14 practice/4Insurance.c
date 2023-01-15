#include <stdio.h>

struct fullname {
    char first[10];
    char middle[20];
    char last[30];
};

struct insurance {
    struct fullname name;
    long int number;
};


void show_customers(struct insurance customers[], int n);
void show_single(struct insurance customer);


int main(void)
{
    struct insurance customers[5] = {
        {{"Jack", "Doodoo", "Zou"}, 102939102},
        {{"Peter", "Eggy", "Duan"}, 192938102},
        {{"Oliver", "Shitter", "Wang"}, 293800291},
        {{"Bill", {'\0'}, "Zhang"}, 182930151},
        {{"Peter", {'\0'}, "Griffin"}, 992193910}
        };
    int i;
    
    show_customers(customers, 5);
    for (i = 0; i < 5; i++)
        show_single(customers[i]);

    return 0;
}


void show_customers(struct insurance customers[], int n)
{
    int x;

    for (x = 0; x < n; x++)
        if (customers[x].name.middle[0] != '\0')
            printf("%s, %s %s. -- %ld\n",
                customers[x].name.first,
                customers[x].name.last,
                customers[x].name.middle,
                customers[x].number);
        else
            printf("%s, %s -- %ld\n",
                customers[x].name.first,
                customers[x].name.last,
                customers[x].number);
}


void show_single(struct insurance customer)
{
    if (customer.name.middle[0] != '\0')
            printf("%s, %s %s. -- %ld\n",
                customer.name.first,
                customer.name.last,
                customer.name.middle,
                customer.number);
    else
        printf("%s, %s -- %ld\n",
            customer.name.first,
            customer.name.last,
            customer.number);
}