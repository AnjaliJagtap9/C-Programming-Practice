#include <stdio.h>

int main()
{
    int n, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 1 && n != 4)
    {
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit * digit;
            n = n / 10;
        }

        n = sum;
    }

    if(n == 1)
        printf("true");
    else
        printf("false");

    return 0;
}
