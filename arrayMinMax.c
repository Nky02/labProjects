/*This program locates and display the minimum and maximum value of an array
    Written by: Nicky Shane C. Estrada*/

#include <stdio.h>

void printMinMax(double arr[9]);

int main()
{
    double rates[] = {18.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};

    printMinMax(rates);

    return 0;
}

void printMinMax(double arr[9])
{
    double max = 0;
    double min = 100;
    int i, minLocation, maxLocation;

    for (i = 0; i < 9; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxLocation = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            minLocation = i;
        }
    }

    printf("Maximum value: %.2lf\n", max);
    printf("Location: %d\n\n", maxLocation);

    printf("Minimum value: %.2lf", min);
    printf("\nLocation: %d", minLocation);

    return;
}
