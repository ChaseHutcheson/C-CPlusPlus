#include <stdio.h>
#include <math.h>

int main()
{
    const double PI = 3.141592653589;

    double radius;

    printf("Whats the radius of the circle? ");
    scanf("%lf", &radius);

    double circumference = 2 * PI * radius;
    double area = PI * pow(radius, 2);

    printf("Circumference: %lf", circumference);
    printf("\nArea: %lf", area);

    return 0;
}
