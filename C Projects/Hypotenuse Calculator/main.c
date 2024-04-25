#include <stdio.h>
#include <math.h>

int main()
{
    double side_a;
    double side_b;
    double side_c;
    double angle_opposite_side_c_degrees;

    printf("What's side A of the triangle? ");
    scanf("%lf", &side_a);

    printf("What's side B of the triangle? ");
    scanf("%lf", &side_b);

    printf("What's the angle opposite of the hypotenuse in degrees? ");
    scanf("%lf", &angle_opposite_side_c_degrees);

    double angle_opposite_side_c_radians = angle_opposite_side_c_degrees * (3.14159265359 / 180.0);

    side_c = sqrt(pow(side_a, 2) + pow(side_b, 2) - 2 * (side_a * side_b) * cos(angle_opposite_side_c_radians));

    printf("The hypotenuse of the triangle is %lf", side_c);

    return 0;
}
