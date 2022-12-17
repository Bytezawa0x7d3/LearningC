#include <stdio.h>

#define ARTICHOKEPRICE 2.05
#define BEETPRICE 1.15
#define CARROTPRICE 1.09

#define DISCOUNTBREAK 100
#define DISCOUNTRATE 0.05

#define PACKAGEFEE1 6.5
#define PACKAGEFEEBREAK1 5
#define PACKAGEFEE2 14
#define PACKAGEFEEBREAK2 20
#define PACKAGEFEE3 0.5

int main(void)
{
    int mass_artichoke = 0;
    int mass_beet = 0;
    int mass_carrot = 0;
    int mass_temp;
    int mass_total;
    char select;
    double vegetableprice;
    double packagefee;
    int isdiscount = 0;
    
    printf("Available vegetables in ABC Store are shown below:\n");
    printf("a) Artichoke %.2lf/pound\nb) Beet %.2lf/pound\nc) Carrot %.2lf/pound\n",
            ARTICHOKEPRICE, BEETPRICE, CARROTPRICE);

    printf("Enter a letter to select the vegetable: ");
    while ((select = getchar()) != 'q')
    {
        if (select == '\n')
            continue;
        switch (select)
        {
            case 'a':
                printf("Enter the mass of artichoke you need in pound: ");
                scanf("%d", &mass_temp);
                mass_artichoke += mass_temp;
                printf("%d pounds of artichoke is in shopping cart now.\n", mass_artichoke);
                break;
            case 'b':
                printf("Enter the mass of beet you need in pound: ");
                scanf("%d", &mass_temp);
                mass_beet += mass_temp;
                printf("%d pounds of beet is in shopping cart now.\n", mass_beet);
                break;
            case 'c':
                printf("Enter the mass of carrot you need in pound: ");
                scanf("%d", &mass_temp);
                mass_carrot += mass_temp;
                printf("%d pounds of carrot is in shopping cart now.\n", mass_carrot);
                break;
            default:
                printf("The letter you entered is out of range.\n");
        }
        mass_temp = 0;
        printf("Enter the letter to select: ");
    }

    vegetableprice = (mass_artichoke * ARTICHOKEPRICE) 
                   + (mass_beet * BEETPRICE)
                   + (mass_carrot * CARROTPRICE);
    if (vegetableprice > DISCOUNTBREAK)
        isdiscount = 1;
    
    mass_total = mass_artichoke + mass_beet + mass_carrot;
    if (mass_total <= PACKAGEFEEBREAK1)
        packagefee = PACKAGEFEE1;
    else if (mass_total <= PACKAGEFEEBREAK2)
        packagefee = PACKAGEFEE2;
    else
        packagefee = PACKAGEFEE2 + PACKAGEFEE3 * (mass_total - PACKAGEFEEBREAK2);
    
    printf("\n%d pounds of %s, $%.2lf per pound, $%.2lf totally.\n",
            mass_artichoke, "artichoke", ARTICHOKEPRICE, mass_artichoke * ARTICHOKEPRICE);
    printf("%d pounds of %s, $%.2lf per pound, $%.2lf totally.\n",
            mass_beet, "beet", BEETPRICE, mass_beet * BEETPRICE);
    printf("%d pounds of %s, $%.2lf per pound, $%.2lf totally.\n",
            mass_carrot, "carrot", CARROTPRICE, mass_carrot * CARROTPRICE);
    printf("Total vegetable price is $%.2lf.\n", vegetableprice);
    if (isdiscount)
        printf("Total vegetable price after %.0lf%% discount is $%.2lf.\n",
                100.0*DISCOUNTRATE, vegetableprice *= (1.0 - DISCOUNTRATE));
    printf("Total mass is %d pound with package fee $%.2lf.\n", mass_total, packagefee);
    printf("You should pay $%.2lf for this order.", packagefee + vegetableprice);

    return 0;
}
