#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Pseudo random numbers are numbers that are statistically random (Don't do this for cryptographic security)

    srand(time(0));

    int number1 = (rand() % 6) + 1;

    printf("%d", number1);

    return 0;
}
