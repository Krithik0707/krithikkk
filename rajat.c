#include <stdio.h>
#include <stdlib.h>

struct stud {
    char name[100];
    float age;
    int roll;
    int marks[100];
};

int main() {
    int j;

    struct stud s[3];

    for (j = 0; j < 2; j++) {
        printf("Enter Name: ");
        scanf("%s", s[j].name);

        printf("Enter roll from 1 : ");
        scanf("%d", &s[j].roll);

        printf("Enter age: ");
        scanf("%d", &s[j].age);
    }

    for (j = 0; j < 2; j++) {
            printf("Name: %s\n", s[j].name);
            printf("Roll no: %d\n", s[j].roll);
            printf("Age: %d\n", s[j].age);

    }




}
