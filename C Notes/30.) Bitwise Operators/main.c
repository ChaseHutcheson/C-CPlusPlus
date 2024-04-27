#include <stdio.h>

int main()
{
    // Bitwise operators are special operators used in bit level programming

    // & = AND: If both bits are 1, return 1
    // | = OR: If one of two bits are 1, return 1
    // ^ = XOR: if both bits are 1, return 0
    // << = Left Shift: Shift all bits to the left the specified amount of places
    // >> = Right Shift: Shift all bits to the right the specified amount of places

    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z = 64; // 00001110

    printf("AND = %d\n", x & y);
    printf("OR = %d\n", x | y);
    printf("XOR = %d\n", x ^ y);
    printf("Left Shift = %d\n", x << 1);
    printf("Right Shift = %d\n", x >> 1);

    return 0;
}
