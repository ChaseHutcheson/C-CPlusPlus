#include <stdio.h>

void printAge(int *pAge)
{
    printf("You are %d years old", *pAge);
}

int main()
{
    // Pointers are references to memory addresses that are holding other variables

    int age = 21;
    int *pAge = &age; //  It's good practice to assing NULL if declaring a pointer without assigning a value yet

    printf("Address of Age: %p\n", &age);
    printf("Value of Age: %d\n", age);

    printf("Size of Age: %d bytes\n", sizeof(age));
    printf("Value of pAge: %d bytes\n", sizeof(pAge));

    printf("Address of pAge: %p\n", pAge);
    printf("Value of pAge: %d\n", *pAge); // De-referencing

    printAge(pAge);

    return 0;
}
