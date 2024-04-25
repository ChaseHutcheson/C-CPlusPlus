#include <stdio.h>
#include <ctype.h>

double convertFtoC(double temp_in_fahrenheit)
{
    return (temp_in_fahrenheit - 32.0) * (5.0 / 9.0);
}

double convertCtoF(double temp_in_celcius)
{
    return (temp_in_celcius * (9.0 / 5.0)) + 32.0;
}

int main()
{
    char temp_unit;
    double input;

    printf("Are you converting to Fahrenheit or Celcius (F or C)? ");
    scanf("%c", &temp_unit);

    switch (toupper(temp_unit))
    {
    case 'C':
        printf("Input temp in Fahrenheit: ");
        scanf("%lf", &input);
        printf("%.2lf degrees Fahrenheit is %.2lf degrees in Celcius", input, convertFtoC(input));
        break;

    case 'F':
        printf("Input temp in Celcius: ");
        scanf("%lf", &input);
        printf("%.2lf degrees Celcius is %.2lf degrees in Fahrenheit", input, convertCtoF(input));
        break;

    default:
        printf("Entered temperature unit doesn't match C or F. Please retry.");
        break;
    }

    return 0;
}