#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int sum = 0;
    int min, max;
    int negatives = 0;
    float average;

    do
    {
        printf("Enter number: ");
        scanf("%d", &n);

        if(n != 0)
        {
            if(count == 0)
            {
                min = n;
                max = n;
            }

            if(n < min)
                min = n;

            if(n > max)
                max = n;

            sum = sum + n;
            count++;

            if(n < 0)
                negatives++;
        }

    } while(n != 0);

    if(count == 0)
    {
        printf("No numbers were entered.\n");
    }
    else
    {
        average = (float)sum / count;

        printf("count = %d\n", count);
        printf("sum = %d\n", sum);
        printf("average = %.5f\n", average);
        printf("min = %d\n", min);
        printf("max = %d\n", max);
        printf("negatives = %d\n", negatives);
    }

    return 0;
}
