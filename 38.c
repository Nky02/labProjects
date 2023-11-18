/*Estrada 11/08/2023*/

#include <stdio.h>
#include <math.h>

double ceilingVal(double num);
double floorVal(double num);
double roundOffVal(double num);

int main()
{
    double numInput, calculateCeilingVal, calculateFloorVal, calculateRoundedVal;
    scanf("%lf", &numInput);

    calculateCeilingVal = ceilingVal(numInput);
    calculateFloorVal = floorVal(numInput); // function call
    calculateRoundedVal = roundOffVal(numInput);

    printf("The Ceiling Value of %f is: %lf\n", numInput, calculateCeilingVal);
    printf("The Floor Value of %f   is: %lf\n", numInput, calculateFloorVal);
    printf("The Rounded Value of %f is: %lf\n\n", numInput, calculateRoundedVal);

    return 0;
}

double ceilingVal(double num)
{
    return ceil(num);
}

double floorVal(double num)
{
    return floor(num);
}

double roundOffVal(double num)
{
    double roundedOffVal = num + 0.005;
    roundedOffVal = roundedOffVal * 100;
    roundedOffVal = (int)roundedOffVal / 100.0;
    return roundedOffVal;
}
