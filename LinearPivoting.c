#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float a[10][11];
    float max, temp, factor;
    int i, j, k, p;
    float epsilon = 0.000001;

    printf("Enter number of variables: ");
    scanf("%d", &n);

    printf("Enter the augmented matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    /* Gaussian Elimination with Partial Pivoting */

    for (i = 0; i < n - 1; i++)
    {
        /* Find maximum element in current column */

        max = fabs(a[i][i]);
        p = i;

        for (j = i + 1; j < n; j++)
        {
            if (fabs(a[j][i]) > max)
            {
                max = fabs(a[j][i]);
                p = j;
            }
        }

        /* Check for ill-conditioned system */

        if (max < epsilon)
        {
            printf("Ill-conditioned system.\n");
            return 0;
        }

        /* Interchange rows */

        if (p != i)
        {
            for (j = i; j <= n; j++)
            {
                temp = a[i][j];
                a[i][j] = a[p][j];
                a[p][j] = temp;
            }
        }

        /* Elimination */

        for (j = i + 1; j < n; j++)
        {
            factor = a[j][i] / a[i][i];

            for (k = i; k <= n; k++)
            {
                a[j][k] = a[j][k] - factor * a[i][k];
            }
        }
    }

    /* Check last pivot */

    if (fabs(a[n - 1][n - 1]) < epsilon)
    {
        printf("Ill-conditioned system.\n");
        return 0;
    }

    /* Print upper triangular matrix */

    printf("\nUpper triangular matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("%8.3f ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
