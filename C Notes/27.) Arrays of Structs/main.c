#include <stdio.h>

struct Student
{
    char name[25];
    float gpa;
};

int main()
{
    struct Student student1 = {"Chase", 3.9};
    struct Student student2 = {"Blake", 3.89};
    struct Student student3 = {"Person3", 3.9};
    struct Student student4 = {"Person4", 3.89};

    struct Student students[] = {student1, student2, student3, student4};

    printf("Students\n----------------------\n");
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("Name: %-12s | GPA: %.2f\n", students[i].name, students[i].gpa);
    }

    return 0;
}
