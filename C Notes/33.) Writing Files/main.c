#include <stdio.h>

int main()
{
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "Hello, World!\n");

    fclose(pF);

    /*
        if (remove("test.txt") == 0)
        {
            printf("File deleted successfully.");
        }
        else
        {
            printf("File delete unsuccessful.");
        }
    */

    return 0;
}
