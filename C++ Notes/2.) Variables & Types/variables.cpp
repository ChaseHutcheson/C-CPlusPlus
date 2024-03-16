#include <iostream>

int main() {

    /* Variable Types:
    INT: Whole numbers,
    DOUBLE: Numbers including decimals,
    CHAR: Single Character,
    BOOL: boolean / True or False,
    STRING: Representation of a combination of chars
    */

    int x; // declaration
    x = 5; // assignment
    double y = 6.90854567890987685; // both declaration and assignment
    char a = 'a';
    bool is_cool = true;
    std::string hey = "hello";


    // Note: '' and "" are different. '' is for single chars and "" is for strings

    std::cout << "INT: " << x << "\n";
    std::cout << "DOUBLE: " << y << "\n";
    std::cout << "CHAR: " << a << "\n";
    std::cout << "BOOL: " << is_cool << "\n";
    std::cout << "STRING: " << hey;
 
    return 0;
}