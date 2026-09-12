#include <stdio.h>

int main()
{
    int num, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num >= 10)
    {
        sum = 0;

        while(num > 0)
        {
            digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }

        num = sum;
    }

    printf("Result = %d", num);

    return 0;
}
