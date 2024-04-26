#include <stdio.h>

typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    // Typedefs are reserved keywords that give an existing datatype a "nickname"

    User user1 = {"Chase", "password123", 1};
    User user2 = {"Blake", "password123", 2};

    printf("User %d: Name -> %s, Password -> %s\n\n", user1.id, user1.name, user1.password);
    printf("User %d: Name -> %s, Password -> %s\n\n", user2.id, user2.name, user2.password);

    return 0;
}
