#include <stdio.h>
struct student
{
    char name[12];
    float cgpa;
};
int main()
{
    struct student student1 = {"partha", 8.9};
    struct student student2 = {"susmita", 9};
    struct student student3 = {"srshtha", 5.9};
    struct student student4 = {"sana", 8.7};

    struct student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++){

        printf("%s\t has got %.2f\n",students[i].name,students[i].cgpa);
    }


        return 0;
}