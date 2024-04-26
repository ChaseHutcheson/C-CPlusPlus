#include <stdio.h>

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{

    // Ternary operators are shortcuts to if/else's when assigning/returning a value
    // (condition) ? (if true) : (if false)

    int option_1;
    int option_2;

    printf("Whats your first number? ");
    scanf("%d", &option_1);
    printf("Whats your second number? ");
    scanf("%d", &option_2);

    int max = findMax(option_1, option_2);

    printf("\nResult: %d", max);

    return 0;
}