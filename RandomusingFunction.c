#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
int randomNumber;
srand(time(0));
randomNumber=rand()%100+1;
printf("random number =%d", randomNumber);
    return 0;
}
