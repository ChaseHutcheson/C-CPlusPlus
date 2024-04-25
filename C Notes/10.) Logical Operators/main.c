#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Logical AND &&: Both conditons must be true
    // Logical OR ||: Only one conditon must be true
    // Logical NOT !: Returns the opposite state.

    float tempurature = 70;
    bool sunny = true;

    printf("Values: tempurature = %.1f, sunny = %s (bool)\n\n", tempurature, sunny ? "true" : "false");

    printf("AND:\n");
    if (tempurature >= 60 && sunny)
    {
        printf("It's pretty nice out today!\n");
    }
    else
    {
        printf("It's pretty not nice out today!\n");
    }

    printf("OR:\n");
    if (tempurature >= 60 || sunny)
    {
        printf("It's pretty nice out today!\n");
    }
    else
    {
        printf("It's pretty not nice out today!\n");
    }

    printf("NOT:\n");
    if (!tempurature >= 60)
    {
        printf("It's pretty nice out today!\n");
    }
    else
    {
        printf("It's pretty not nice out today!\n");
    }

    return 0;
}