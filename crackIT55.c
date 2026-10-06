#include <stdio.h>

int main() {

    int n, N;

    // Part (a)
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n + 1; ; i++) {
        if (i % 7 == 0) {
            printf("First number greater than %d divisible by 7 = %d\n", n, i);
            break;
        }
    }

    // Part (b)
    printf("Enter N: ");
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        if (i % 4 == 0 && i % 6 == 0) {
            printf("Largest number <= %d divisible by both 4 and 6 = %d\n", N, i);
            break;
        }
    }

    return 0;
}