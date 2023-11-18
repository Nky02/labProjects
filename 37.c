/*Estrada 11/8/2023*/

#include <stdio.h>

float roundToTwoDecPlaces(float num);

int main(void)
{
    float numInput;
    float roundedNum;

    printf("Enter floating point number: ");
    scanf("%f", &numInput);

    roundedNum = roundToTwoDecPlaces(numInput);

    printf("%f rounded to two decimal places is %.6f", numInput, roundedNum);

    return 0;
}

float roundToTwoDecPlaces(float num)
{
    int roundedNum = (int)(num * 100 + 0.5);
    float convertedFloat = (float)roundedNum / 100;
    return convertedFloat;
}
