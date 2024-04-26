#include <stdio.h>
#include <string.h>

int main()
{
    // Do-While loops run, then check if the conditon is true.

    int number = 0;
    int sum = 0;

    do
    {
        printf("Please enter a number greater than 0 (To exit, enter a number less than 0): ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0);

    printf("Sum: %d", sum);

    return 0;
}
