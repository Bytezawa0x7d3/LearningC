#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem, int val);
void show_array(const int ar[], int n);


int main(void)
{
    int * pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initializatino value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("\nEnter the number of elements (-1 or q to quit): ");
    }
    printf("Done.\n");

    return 0;
}


int * make_array(int elem, int val)
{
    int * array = calloc(elem, sizeof(int));
    int i;

    for (i = 0; i < elem; i++)
        array[i] = val;
    
    return array;
}


void show_array(const int ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d %c", ar[i], (i % 8 == 7) ? '\n' : '\0');
    printf("%c", (i % 8 == 0) ? '\0' : '\n');
}
