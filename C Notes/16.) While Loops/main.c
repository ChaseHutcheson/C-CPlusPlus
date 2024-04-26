#include <stdio.h>
#include <string.h>

int main()
{
    // While loops run "while" a conditon is true.

    char name[25];

    printf("What is your name? ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Please enter your name ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello, %s!", name);

    return 0;
}
