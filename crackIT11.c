#include<stdio.h>
int main(){

float r, length, width;
float a, b, c;
float area, perimeter, s;
//circle
printf("enter a radius:");
scanf("%d",&r);
area=3.14*r*r;
perimeter=2*3.14*r;
printf("area of cicle = %d",area);
printf("perimeter = %d",perimeter);
//rectangle
printf("enter length and width of rectangle:");
scanf("%f %f",length,width);
area=length*width;
perimeter=2*(length+width);
print("area of rectangle = %f",area);
printf("the perimeter of rectangle= %f",perimeter);
// Triangle
printf("\nEnter three sides of triangle: ");
scanf("%f %f %f", &a, &b, &c);
s = (a + b + c) / 2;
area = sqrt(s * (s - a) * (s - b) * (s - c));
 perimeter = a + b + c;

    printf("Area of triangle = %.2f\n", area);
    printf("Perimeter of triangle = %.2f\n", perimeter);

    return 0;
}
