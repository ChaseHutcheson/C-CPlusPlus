#include <iostream>

// Namespaces provide a solution to name conflicts. 

namespace first{
    int x = 1;
}

namespace second{
    int x = 1;
}

int main(){

    using namespace first;

    // the "::" is called the scope resolution operator, which is how you access namespace variables
    // the using namespace feature tells the program that any variable in our program that matches a variable from the namespace, then to use that namespace
    // You can also just use the using keyword to get specific methods. like using std::cout will mean we can print strings only using cout

    std::cout << x << "\n";
    std::cout << second::x;

    return 0;
}