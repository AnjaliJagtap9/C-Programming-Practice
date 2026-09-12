#include <stdio.h>

int main()
{
    int n, i;
    int f0 = 0, f1 = 1, f2;
    int sum = 0;
    float ratio;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of terms");
        return 0;
    }

    if (n >= 1)
    {
        printf("%d ", f0);
        sum += f0;
    }

    if (n >= 2)
    {
        printf("%d ", f1);
        sum += f1;
    }

    for (i = 2; i < n; i++)
    {
        f2 = f0 + f1;
        printf("%d ", f2);

        sum += f2;

        f0 = f1;
        f1 = f2;
    }

    ratio = (float)f1 / f0;

    printf("\nSum = %d", sum);
    printf("\nRatio of last two terms = %.2f", ratio);

    return 0;
}
