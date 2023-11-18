/*Estrada 11/08/2023*/

#include <stdio.h>
#include <math.h>

double computePerimeter(double a, double b);
double computeArea(double a, double b);

int main()
{
    double FirstSide, SecondSide, Perimeter, Area;
    double a, b;

    printf("Enter the length of the first side of the triangle: ");
    scanf("%lf", &FirstSide);

    printf("Enter the length of the second side of the triangle: ");
    scanf("%lf", &SecondSide);

    Perimeter = computePerimeter(FirstSide, SecondSide);
    Area = computeArea(FirstSide, SecondSide);

    printf("The perimeter of the triangle is: %.2lf\n", Perimeter);
    printf("The area of the triangle is: %.2lf\n", Area);

    return 0;
}

double computePerimeter(double a, double b)
{
    double hypotenuse;

    hypotenuse = sqrt(a * a + b * b);
    return a + b + hypotenuse;
}
double computeArea(double a, double b)
{
    return 0.5 * a * b;
}