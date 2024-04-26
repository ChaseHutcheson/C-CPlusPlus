#include <stdio.h>

// Function Prototype
void hello(char[], int);

int main()
{
    /*
        Function Prototype:
        A declaration, without a body before main().
        Ensures that calls to the function are made with
        the correct params

        Why?

        Many C compilers don't check the params which, when there are
        errors, can cause unexpected behavior because the program still
        compiles and runs. So, you use a function prototype to act
        as error handling
    */

    hello("Chase", 72);

    return 0;
}

// Function with added body
void hello(char name[], int age)
{
    printf("Hello, %s", name);
    printf("\nYou are %d years old.", age);
}