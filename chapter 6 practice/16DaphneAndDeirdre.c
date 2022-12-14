#include <stdio.h>

double daphne(int year);
double deirdre(int year);

int main(void)
{
    int year;
    double profit_daphne, profit_deirdre;

    printf("           Year         Daphne        Deirdre\n");
    for (year = 1; profit_daphne = daphne(year), profit_deirdre = deirdre(year),
         profit_daphne >= profit_deirdre; year++)
    {
        printf("%15d%15lf%15lf\n", year, profit_daphne, profit_deirdre);
    }
    printf("%15d%15lf%15lf\n", year, profit_daphne, profit_deirdre);
    printf("The profit of Deirdre will be greater than that of Daphne after %d years.",
            year);

    return 0;
}

double daphne(int year)
{
    double init = 100.0;
    double rate = 0.1;
    double profit = 0.0;
    int count;

    for (count = 0; count < year; count++)
        profit += init * 0.1;
    
    return profit;
}

double deirdre(int year)
{
    double init = 100.0;
    double profit = init;
    double rate = 0.05;
    int count;

    for (count = 0; count < year; count++)
        profit *= 1.0 + rate;
    
    return (profit - init);
}
