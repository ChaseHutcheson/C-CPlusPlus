#include <stdio.h>

int main()
{
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You're a legal adult.");
    }
    else if (age < 0)
    {
        printf("You haven't even been born yet.");
    }
    else
    {
        printf("You're legally a minor.");
    }

    return 0;
}