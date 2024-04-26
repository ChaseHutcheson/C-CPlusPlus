#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7,
};

int main()
{
    // Enums are user defined types of named integer identifiers

    enum Day today = Sun;

    if (today == 1 || today == 7)
    {
        printf("It's the weekend!");
    }
    else
    {
        printf("I have to got to work today.");
    }
    return 0;
}
