#include <stdio.h>

/*
    The return statement basically turns the function call
    into a value that can be assinged under a variable
*/

double square(double x)
{
    double result = x * x;
    return result;
}

int main()
{
    double x = square(3.14);

    printf("Result: %.3lf", x);

    return 0;
}