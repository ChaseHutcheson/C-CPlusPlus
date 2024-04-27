#include <stdio.h>

int main()
{
    // Memory is an array of bytes within RAM. You can think of memory as a street
    // Memory blocks are units (bytes) within memory used to hold a value, which you can think of as a house tennant
    // Memory addresses are the addresses of where a memory block is located, like a house address

    double a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}
