#include <stdio.h>

int main()
{
    // continue skips the rest of the code and goes to the next iteration
    // break stops the entire loop in its tracks

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        printf("%d\n", i);
    }

    for (int j = 1; j <= 20; j++)
    {
        if (j == 13)
        {
            break;
        }
        printf("%d\n", j);
    }

    return 0;
}
