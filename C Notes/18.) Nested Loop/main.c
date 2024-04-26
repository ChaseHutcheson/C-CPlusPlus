#include <stdio.h>

int main()
{
    int rows;
    int columns;
    char symbol;

    printf("Enter a number of rows: ");
    scanf("%d", &rows);

    printf("Enter a number of columns: ");
    scanf("%d", &columns);

    while (getchar() != '\n')
        ;

    printf("Enter a single symbol: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
