#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess, attempts = 0;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > randomNumber)
        {
            printf("Too high!!\n");
        }
        else if (guess < randomNumber)
        {
            printf("Too low!!\n");
        }
        else
        {
            printf("Correct!!\n");
            break;
        }
    }

    printf("You found it in %d attempts", attempts);

    return 0;
}
