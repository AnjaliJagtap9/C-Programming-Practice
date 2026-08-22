#include<stdio.h>
#include<stdlib.h>
int isPrime(int n);
int isPalindrome(int n);
int factorial(int n);
void fibonacci(int n);
int gcd(int a,int b);
int lcm(int a,int b);
int reverseNumber(int n);

int main()

{
int n,a,b;
printf("enter an number: ");
scanf("%d",&n);
int choice;
printf("============ Number Analysis Tool ================ ");
printf("1. Check Prime ");
printf("2.Check Palindrome ");
printf("3. Calculate Factorial ");
printf("4. Fibonacci");
printf("5. Calculate GCD");
printf("6. Calculate Lcm");
printf("7. Reverse Number");
printf("8.Exit ");
printf("enter your choice : ");
scanf("%d",&choice);
switch(choice)
    {
        case 1:
            if(isPrime(n))
                printf("%d is a Prime Number\n", n);
            else
                printf("%d is Not a Prime Number\n", n);
            break;

        case 2:
            if(isPalindrome(n))
                printf("%d is a Palindrome\n", n);
            else
                printf("%d is Not a Palindrome\n", n);
            break;

        case 3:
            printf("Factorial of %d = %d\n", n, factorial(n));
            break;

        case 4:
            printf("Fibonacci Series:\n");
            fibonacci(n);
            break;

        case 5:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("GCD = %d\n", gcd(a, b));
            break;

        case 6:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("LCM = %d\n", lcm(a, b));
            break;

        case 7:
            printf("Reverse of %d = %d\n", n, reverseNumber(n));
            break;

        case 8:
            printf("Program exited.\n");
            break;

        default:
            printf("Invalid input!\n");
    }

    return 0;
}
int isPrime(int n)
{
    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isPalindrome(int n){
int original = n;
    int reverse = reverseNumber(n);

    if(original == reverse)
        return 1;
    else
        return 0;
}
int factorial(int n){
int fact=1;
for(int i=1;i<=n;i++){
fact=fact*i;
} 
return fact;
}
void fibonacci (int n){
int first = 0;
    int second = 1;
    int next;

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");}
    //gcd
    int gcd(int a, int b)
{
    int remainder;

    while(b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}
//lcm
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
/* Reverse Number */
int reverseNumber(int n)
{
    int reverse = 0;
    int remainder;

    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    return reverse;
}
