#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, root1, root2;
    float realPart, imaginaryPart;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("Infinite number of solutions\n");
            else
                printf("No solution\n");
        }
        else
        {
            root1 = -c / b;
            printf("Linear equation\n");
            printf("Root = %.2f\n", root1);
        }
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);

            printf("Two real roots\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (d == 0)
        {
            root1 = -b / (2 * a);

            printf("Repeated real root\n");
            printf("Root = %.2f\n", root1);
        }
        else
        {
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-d) / (2 * a);

            printf("Complex roots\n");
            printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
        }
    }

    return 0;
}
