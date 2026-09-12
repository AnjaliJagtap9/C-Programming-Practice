#include <stdio.h>

int main() {
    int n;
    int count = 0;
    int sum = 0;
    int min, max;
    int negative = 0;
    float avg;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        if (n != 0) {

            if (count == 0) {
                min = n;
                max = n;
            } 
            else {
                if (n < min) {
                    min = n;
                }

                if (n > max) {
                    max = n;
                }
            }

            sum = sum + n;
            count++;

            if (n < 0) {
                negative++;
            }
        }

    } while (n != 0);

    if (count == 0) {
        printf("No valid numbers entered.\n");
    }
    else {
        avg = (float)sum / count;

        printf("Minimum: %d\n", min);
        printf("Maximum: %d\n", max);
        printf("Average: %.2f\n", avg);
        printf("Count of negative numbers: %d\n", negative);
        printf("Sum of numbers: %d\n", sum);
        printf("Count of numbers: %d\n", count);
    }

    return 0;
}