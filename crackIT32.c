#include <stdio.h>

int main()
{
    int units;
    float bill = 0;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 1.50;

        printf("first %d @ 1.50 = %.2f\n", units, bill);
    }
    else if (units <= 200)
    {
        bill = 100 * 1.50 + (units - 100) * 2.50;

        printf("first 100 @ 1.50 = 150.00\n");
        printf("next %d @ 2.50 = %.2f\n", units - 100, (units - 100) * 2.50);
    }
    else
    {
        bill = 100 * 1.50 + 100 * 2.50 + (units - 200) * 4.00;

        printf("first 100 @ 1.50 = 150.00\n");
        printf("next 100 @ 2.50 = 250.00\n");
        printf("above %d @ 4.00 = %.2f\n", units - 200, (units - 200) * 4.00);
    }

    printf("total = %.2f\n", bill);

    return 0;
}