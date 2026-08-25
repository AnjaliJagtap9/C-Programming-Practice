#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    float avg;

    for(i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum = sum + num;
    }

    avg = sum / 10.0;

    if(avg > 50)
    {
        avg = avg / 2;
    }

    printf("Final average = %.2f", avg);

    return 0;
}
