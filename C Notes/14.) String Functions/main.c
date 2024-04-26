#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Chase";
    char string2[] = "Hutcheson";

    printf("strlwr() converts a string to lowercase\nInput: \"Chase\" | Result: %s\n", strlwr(string1));

    printf("\nstrupr() converts a string to uppercase\nInput: \"Chase\" | Result: %s\n", strupr(string1));

    strcpy(string1, "Chase");
    strcpy(string2, "Hutcheson");

    printf("\nstrcat() appends string2 to the end of string1\nInput: \"Chase\", \"Hutcheson\" | Result: %s\n", strcat(string1, string2));

    strcpy(string1, "Chase");
    strcpy(string2, "Hutcheson");

    printf("\nstrncat() appends n chars from string2 to the end of string1\nInput: \"Chase\", \"Hutcheson\", 1 | Result: %s\n", strncat(string1, string2, 1));

    strcpy(string1, "Chase");
    strcpy(string2, "Hutcheson");

    printf("\nstrcpy() copies string2 to string1\nInput: \"Chase\", \"Hutcheson\" | Result: %s\n", strcpy(string1, string2));

    strcpy(string1, "Chase");
    strcpy(string2, "Hutcheson");

    printf("\nstrncpy() copies n chars from string2 to string1\nInput: \"Chase\", \"Hutcheson\", 1 | Result: %s\n", strncpy(string1, string2, 1));

    return 0;
}
