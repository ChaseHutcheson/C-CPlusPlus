#include <stdio.h>

int main()
{
    FILE *pF = fopen("quote.txt", "r");

    char buffer[255];

    if (pF == NULL)
    {
        printf("ERROR: Unable to locate file.");
    }
    else
    {
        printf("Beginnning file read...\n\n");
    }

    while (fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }

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
