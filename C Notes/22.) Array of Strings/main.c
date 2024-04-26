#include <stdio.h>
#include <string.h>

int main()
{
    // With arrays of strings, you cannot directly reassign elements
    char cars[][10] = {"Chevy", "Subaru", "Dodge"};

    // To reassign string arrays, you should use strcpy()
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}
