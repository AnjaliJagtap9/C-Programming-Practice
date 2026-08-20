#include <stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectArea(float a, float b);

int main()
{
    float side, rad, a, b;

    printf("Enter side: ");
    scanf("%f", &side);
    printf("Square area = %f\n", squareArea(side));

    printf("Enter radius: ");
    scanf("%f", &rad);
    printf("Circle area = %f\n", circleArea(rad));

    printf("Enter length: ");
    scanf("%f", &a);

    printf("Enter breadth: ");
    scanf("%f", &b);
    printf("Rectangle area = %f\n", rectArea(a, b));

    return 0;
}

float squareArea(float side)
{
    return side * side;
}

float circleArea(float rad)
{
    return 3.14 * rad * rad;
}

float rectArea(float a, float b)
{
    return a * b;
}
