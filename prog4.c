#include <stdio.h>

int main()
{
    int n, i;
    int count = 0;
    int properSum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            count++;

            if (i != n)
            {
                properSum += i;
            }
        }
    }

    printf("\nTotal number of factors: %d", count);

    if (count == 2)
    {
        printf("\n%d is a prime number", n);
    }
    else
    {
        printf("\n%d is not a prime number", n);

        if (properSum == n)
        {
            printf("\n%d is a perfect number", n);
        }
        else
        {
            printf("\n%d is not a perfect number", n);
        }
    }

    return 0;
}
