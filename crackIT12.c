#include<stdio.h>
int main(){
int p,t;
float r;
float si;
float amount;
int year;
printf("enter a principle:");
scanf("%d",&p);
printf("enter annual rate=");
scanf("%f",&r);
printf("enter year :");
scanf("%d",&t);
si=p*r*t/100;
amount=p+si;
printf("\nSimple Interest = %.2f\n", si);
    printf("Total Amount = %.2f\n", amount);

    // Amount at the end of each year
    amount = p;

    for (year = 1; year <= t; year++)
    {
        amount = amount + (p * r / 100);

        printf("Amount after year %d = %.2f\n", year, amount);
    }

    return 0;
}
