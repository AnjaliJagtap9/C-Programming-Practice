#include <stdio.h>

int main() {
    int start, end;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for (int n = start; n <= end; n++) {

        int temp = n;
        int digits = 0;
        int sum = 0;

        // Count digits
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }

        temp = n;

        // Calculate sum of digits raised to digit count
        while (temp > 0) {
            int digit = temp % 10;

            int power = 1;
            for (int i = 0; i < digits; i++) {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        // Check Armstrong
        if (sum == n) {
            printf("%d ", n);
        }
    }

    return 0;
}