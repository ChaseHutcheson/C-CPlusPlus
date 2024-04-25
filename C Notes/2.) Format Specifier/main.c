#include <stdio.h>

int main()
{
    // Format specifiers % defines and formats a type of data to be displayed

    // %c = char
    // %s = array of chars / string
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precison
    // %1 minimum field width
    // %- left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    // Printing floats with no specified precison;
    printf("Item 1: $%f\n", item1);
    printf("Item 2: $%f\n", item2);
    printf("Item 3: $%f\n\n", item3);

    // Printing floats with specified precison;
    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n\n", item3);

    // Printing floats with specified precison and minimum width | Right Aligned;
    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n\n", item3);

    // Printing floats with specified precison and minimum width | Left Aligned;
    printf("Item 1: $%-8.2f\n", item1);
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f\n\n", item3);

    return 0;
}
