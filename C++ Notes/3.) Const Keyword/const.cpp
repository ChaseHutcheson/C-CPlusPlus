#include <iostream>

int main() {
    // The const keyword means that the value of the variable is the same always, basically read only
    // Convention dictates that any variable thats a const should be all uppercase.
    const double PI = 3.141592653589;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm" << "\n";

    const int LIGHT_SPEED = 299792458;

    std::cout << LIGHT_SPEED;
    
    return 0;
}