#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32;
   printf("Fahrenheit = %.2f %.2f \n", celsius,fahrenheit);
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("Celsius = %.2f %.2f\n", celsius,fahrenheit);

    return 0;
}