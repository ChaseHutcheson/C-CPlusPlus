#include <stdio.h>
#include <ctype.h>

int main()
{
    char grade;

    printf("Please enter your grade: ");
    scanf("%c", &grade);

    switch (toupper(grade))
    {
    case 'A':
        printf("Perfect!");
        break;
    case 'B':
        printf("Good Job!");
        break;
    case 'C':
        printf("That's Decent.");
        break;
    case 'D':
        printf("You'll definelty need to study.");
        break;
    case 'F':
        printf("Failed.");
        break;
    default:
        printf("Grade entered is not valid.");
    }

    return 0;
}