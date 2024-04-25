#include <stdio.h>

int main()
{
    // Arithmetic Operators

    // + (addition)
    // - (subtration)
    // * (multiplication)
    // / (divison)
    // % (moduls)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;

    int x_plus_y = x + y;
    int x_minus_y = x - y;
    int x_multiplied_by_y = x * y;
    int x_divided_by_y = x / y;
    int x_modulo_y = x % y;
    int x_incremented = x++;
    int x_decremented = x--;

    printf("Values: x = %d, y = %d\n\n", x, y);
    printf("Additon (x + y): %d\n", x_plus_y);
    printf("Subtraction (x - y): %d\n", x_minus_y);
    printf("Multiplication (x * y): %d\n", x_multiplied_by_y);
    printf("Divison (x / y): %d\n", x_divided_by_y);
    printf("Modulus (x %% y): %d\n"), x_modulo_y;
    printf("Increment (x++): %d\n", x_incremented);
    printf("Decrement (x--): %d\n"), x_decremented;

    return 0;
}
