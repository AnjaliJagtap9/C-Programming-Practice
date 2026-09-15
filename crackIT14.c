#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    float a, b, c;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter y: ");
    scanf("%f", &y);

    // (a) x^3 + 3x^2 + 4x - y^3
    a = pow(x, 3) + 3 * pow(x, 2) + 4 * x - pow(y, 3);

    // (b) sqrt(2x^2 + 4y^2 + x^3 + 10)
    b = sqrt(2 * pow(x, 2) + 4 * pow(y, 2) + pow(x, 3) + 10);

    // (c) sqrt(4x^2 + 8y^2 + x^3 + 5) / 2x^2
    c = sqrt(4 * pow(x, 2) + 8 * pow(y, 2) + pow(x, 3) + 5)
        / (2 * pow(x, 2));

    printf("\n(a) = %.2f", a);
    printf("\n(b) = %.2f", b);
    printf("\n(c) = %.2f\n", c);

    return 0;
}
