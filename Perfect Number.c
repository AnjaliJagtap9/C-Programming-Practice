#include <stdio.h>

int main()
{
    int num, sum = 0;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }

        i++;
    }

    if (sum == num)
    {
        printf("%d is a Perfect Number", num);
    }
    else
    {
        printf("%d is not a Perfect Number", num);
    }

    return 0;
}
