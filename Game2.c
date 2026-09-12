#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int computer, user;
    int wins = 0;

    srand(time(0));

    for(int i = 1; i <= 5; i++)
    {
        computer = rand() % 6 + 1;

        printf("\nRound %d\n", i);
        printf("Enter your number (1-6): ");
        scanf("%d", &user);

        printf("Computer = %d\n", computer);

        if(user == computer)
        {
            printf("You Win!!\n");
            wins++;
        }
        else
        {
            printf("You Lose!!\n");
        }
    }

    printf("\nTotal wins = %d", wins);

    return 0;
}
