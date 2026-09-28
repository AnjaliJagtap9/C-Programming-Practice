#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    char text[] = "Hello";

    printf("INTEGER TYPE\n");
    printf("Size  : %zu bytes\n", sizeof(int));
    printf("Range : %d to %d\n\n", INT_MIN, INT_MAX);

    printf("FLOAT TYPE\n");
    printf("Size      : %zu bytes\n", sizeof(float));
    printf("Range     : %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Precision : %d digits\n\n", FLT_DIG);

    printf("DOUBLE TYPE\n");
    printf("Size      : %zu bytes\n", sizeof(double));
    printf("Range     : %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Precision : %d digits\n\n", DBL_DIG);

    printf("CHARACTER TYPE\n");
    printf("Size  : %zu byte\n", sizeof(char));
    printf("Range : %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    printf("STRING TYPE\n");
    printf("C does not have a built-in string type.\n");
    printf("String is stored as a character array.\n");
    printf("Text   : %s\n", text);
    printf("Size   : %zu bytes\n", sizeof(text));

    return 0;
}