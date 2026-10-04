#include <stdio.h>

int main()
{
    int n, r;
    int binary = 0;
    int place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        r = n % 2;

        binary = binary + r * place;

        n = n / 2;

        place = place * 10;
    }

    printf("Binary representation = %d", binary);

    return 0;
}