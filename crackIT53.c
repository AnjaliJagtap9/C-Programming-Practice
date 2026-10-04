#include <stdio.h>

int main()
{
    int n;
    int divisor = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            divisor = i;
            break;
        }
    }

    printf("Smallest divisor = %d\n", divisor);

    if(divisor == n)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}