#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, root1, root2;
    float real, imag;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if a is zero
    if (a == 0) {
        printf("It is not a quadratic equation.\n");
        return 0;
    }

    // Calculate discriminant
    d = b * b - 4 * a * c;

    if (d > 0) {
        // Two real roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Two real roots:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (d == 0) {
        // Repeated root
        root1 = -b / (2 * a);

        printf("Repeated root:\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        // Complex roots
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);

        printf("Complex roots:\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}
