#include <stdio.h>
#include <string.h>
#define CSIZE 4

struct name {
    char first[10];
    char last[10];
};

struct student {
    struct name fullname;
    float grade[3];
    float average;
};


int main(void){
    struct student students[CSIZE] = {
        {"Peter", "Duan"},
        {"Oliver", "Wang"},
        {"Bill", "Zhang"},
        {"Jack", "Zou"}
    };
    char name[10];
    float classaverage = 0;
    int x, y;

    printf("Enter first or last name of a student (q to stop): ");
    scanf("%s", name);
    while (name[0] != 'q')
    {
        for (x = 0; x < CSIZE; x++)
            if (strcmp(students[x].fullname.first, name) == 0 ||
                strcmp(students[x].fullname.last, name) == 0)
                break;
        if (x == CSIZE)
        {
            printf("There is no student whose name is \"%s\". Enter a correct name: ", name);
            scanf("%s", name);
            continue;
        }

        printf("Enter the grades of %s for 3 subjects: ", name);
        scanf("%f%f%f", &students[x].grade[0], &students[x].grade[1], &students[x].grade[2]);
        while (getchar() != '\n')
            continue;
        
        printf("Enter first or last name of next student (q to stop): ");
        scanf("%s", name);
    }

    for (x = 0; x < CSIZE; x++)
    {
        students[x].average = (
            students[x].grade[0] +
            students[x].grade[1] + 
            students[x].grade[2]
            ) / 3;
        classaverage += students[x].grade[0] + students[x].grade[1] + students[x].grade[2];
    }
    classaverage /= 3 * CSIZE;
    
    printf("\n");
    for (x = 0; x < CSIZE; x++)
        printf("%s %s: %g %g %g - %g\n",
            students[x].fullname.first,
            students[x].fullname.last,
            students[x].grade[0],
            students[x].grade[1],
            students[x].grade[2],
            students[x].average);
    printf("Class average: %g", classaverage);

    return 0;
}
