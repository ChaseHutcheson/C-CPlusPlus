#include <stdio.h>

int main()
{
    /*
        Augmented Assignment Operators:

        Used to replace a statement where an operator takes a
        variable as one of its arguments, the reassigns the same
        variable with the result
    */

    int x = 10;

    printf("x = 10\n\n");
    printf("Increment by 2 (x += 2): %d\n", x += 2);
    printf("Decrement by 4 (x -= 4): %d\n", x -= 4);
    printf("Multiply by 3 (x * 3): %d\n", x *= 3);
    printf("Divide by 2 (x * 2): %d\n", x /= 2);
    printf("Modulo by 3 (x * 3): %d\n", x % 3);

    return 0;
}
