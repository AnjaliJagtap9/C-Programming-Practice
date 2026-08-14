#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD first
    gcd = findGCD(num1, num2);

    // Calculate LCM using the formula: (a * b) / GCD
    lcm = (num1 * num2) / gcd;

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
