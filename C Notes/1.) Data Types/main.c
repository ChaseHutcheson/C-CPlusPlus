#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("%-20s%-15s%-20s%-20s%-20s\n", "Data Type", "Memory Usage", "Format Specifier", "Minimum", "Maximum");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("%-20s%-15lu%-20s%-20d %d\n", "char", sizeof(char), "%c", CHAR_MIN, CHAR_MAX);
    printf("%-20s%-15lu%-20s%-20d %d\n", "int", sizeof(int), "%d", INT_MIN, INT_MAX);
    printf("%-20s%-15lu%-20s%-20.10e %20.10e\n", "float", sizeof(float), "%f", FLT_MIN, FLT_MAX);
    printf("%-20s%-15lu%-20s%-20.10e %20.10e\n", "double", sizeof(double), "%lf", DBL_MIN, DBL_MAX);
    printf("%-20s%-15lu%-20s%-20d %d\n", "short", sizeof(short), "%hd", SHRT_MIN, SHRT_MAX);
    printf("%-20s%-15lu%-20s%-20ld %ld\n", "long", sizeof(long), "%ld", LONG_MIN, LONG_MAX);
    printf("%-20s%-15lu%-20s%-20lld %lld\n", "long long", sizeof(long long), "%lld", LLONG_MIN, LLONG_MAX);
    printf("%-20s%-15lu%-20s%-20u %20u\n", "unsigned int", sizeof(unsigned int), "%u", 0, UINT_MAX);
    printf("%-20s%-15lu%-20s%-20d %20u\n", "unsigned char", sizeof(unsigned char), "%c", 0, UCHAR_MAX);
    printf("%-20s%-15lu%-20s%-20d %20u\n", "unsigned short", sizeof(unsigned short), "%hu", 0, USHRT_MAX);
    printf("%-20s%-15lu%-20s%-20lu %20lu\n", "unsigned long", sizeof(unsigned long), "%lu", 0UL, ULONG_MAX);
    printf("%-20s%-15lu%-20s%-20llu %20llu\n", "unsigned long long", sizeof(unsigned long long), "%llu", 0ULL, ULLONG_MAX);
    printf("------------------------------------------------------------------------------------------------\n");

    return 0;
}
