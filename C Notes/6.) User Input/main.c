#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    int age;

    // fgets allows you to read input that includes whitespace
    // It also adds a newline character to the end of the input
    printf("Whats your full name? ");
    fgets(name, 25, stdin);
    // This operation will remove the newline
    name[strlen(name) - 1] = '\0';

    // scanf reads input up untill the whitespace
    printf("Hello, %s. How old are you? ", name);
    scanf("%d", &age);

    return 0;
}
