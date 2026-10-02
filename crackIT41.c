
#include <stdio.h>

int main()
{
    int n, num;
    int min, max;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        sum += num;

        if(i == 1)
        {
            min = num;
            max = num;
        }
        else
        {
            if(num < min)
                min = num;

            if(num > max)
                max = num;
        }
    }

    float average = (float)sum / n;

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    printf("Average = %.2f\n", average);

    return 0;
}