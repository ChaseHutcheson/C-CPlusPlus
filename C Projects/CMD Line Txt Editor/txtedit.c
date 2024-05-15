#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define MAX_LINE_LENGTH 255
#define MAX_LINES 1000

int *lines[MAX_LINES];
int num_lines = 0;
int cursor_x = 0, cursor_y = 0;

void loadFile(char *filename);
void displayFile();
void goToXandY(int x, int y);

int main()
{
    // Load the file into the lines array
    loadFile("code.txt");

    // Display the file
    displayFile();
}

void loadFile(char *filename)
{
    // Use fopen to return a file pointer and save it to a pointer variable called file (FILE *file)
    FILE *file = fopen(filename, "r");

    // Check if the file is NULL
    if (file == NULL)
    {
        // Print an error message and exit the program
        printf("ERROR: Unable to locate file.");
        exit(1);
    }

    // defines the max length of the lines
    char buffer[MAX_LINE_LENGTH];

    //
    while (fgets(buffer, MAX_LINE_LENGTH, file) != NULL)
    {
        // Save all the lines of the file to an array of strings called lines
        lines[num_lines] = strdup(buffer);
        num_lines++;
    }

    fclose(file);
}

void displayFile()
{
    system("cls");
    for (int i = 0; i < num_lines; i++)
    {
        printf("%s", lines[i]);
    }
    goToXandY(cursor_x, cursor_y);
}

void goToXandY(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}