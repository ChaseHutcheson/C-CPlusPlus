#include <stdio.h>
#include <math.h>

int main()
{

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = round(3.55);
    int E = ceil(3.14);
    int F = floor(3.99);
    double G = fabs(-100);
    double H = log(3);
    double I = sin(45);
    double J = cos(45);
    double K = tan(45);

    printf("Square Root of 9: %lf\n", A);
    printf("2 to the 4th power: %lf\n", B);
    printf("3.14 rounded: %d\n", C);
    printf("3.55 rounded: %d\n", D);
    printf("3.14 rounded up: %d\n", E);
    printf("3.99 rounded down: %d\n", F);
    printf("Absolute value of -100: %lf\n", G);
    printf("Log of 3: %lf\n", H);
    printf("sin(45): %lf\n", I);
    printf("cos(45): %lf\n", J);
    printf("tan(45): %lf", K);

    return 0;
}
