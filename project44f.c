/*This program creates customers' bill for a carpet company
Written by: Nicky Shane Estrada
Date: November 12, 2023*/

#include <stdio.h>
#define LABOR_COST 0.35
#define TAX_RATE 0.085

double calcArea(double a, double b);
double calcCarpetCost(double a, double b, double costPerSqFt);
double calcLaborCost(double a, double b);
double calcInstalledPrice(double carpetCost, double laborCost);
double calcDiscountAmount(double installedPrice, double discount);
double calcSubtotal(double installedPrice, double discountAmount);
double calcTax(double subtotal);
double calcTotal(double subtotal, double tax);

void printMeasurements(double length, double width, double area);
void printCharges(double length, double width, double costPerSqFt, double laborCost, double installedPrice, double customerDiscount, double discountAmount, double subtotal, double total);

int main()
{
    double length, width, customerDiscount, costPerSqFt;
    double area, carpetCost, laborCost, installedPrice, discountAmount, tax, subtotal, total;

    // Input
    printf("Length of room (feet)? ");
    scanf("%lf", &length);

    printf("Width of room (feet)? ");
    scanf("%lf", &width);

    printf("Customer discount (percent)? ");
    scanf("%lf", &customerDiscount);

    printf("Cost per square foot (xxx.xx)? ");
    scanf("%lf", &costPerSqFt);

    // Calculations
    area = calcArea(length, width);
    carpetCost = calcCarpetCost(length, width, costPerSqFt);
    laborCost = calcLaborCost(length, width);
    installedPrice = calcInstalledPrice(carpetCost, laborCost);
    discountAmount = calcDiscountAmount(installedPrice, customerDiscount);
    subtotal = calcSubtotal(installedPrice, discountAmount);
    tax = calcTax(subtotal);
    total = calcTotal(subtotal, tax);

    // Output
    printMeasurements(length, width, area);
    printCharges(length, width, costPerSqFt, laborCost, installedPrice, customerDiscount, discountAmount, subtotal, total);

    return 0;
}

double calcArea(double a, double b)
{
    return a * b;
}

double calcCarpetCost(double a, double b, double costPerSqFt)
{
    return calcArea(a, b) * costPerSqFt;
}

double calcLaborCost(double a, double b)
{
    return calcArea(a, b) * LABOR_COST;
}

double calcInstalledPrice(double carpetCost, double laborCost)
{
    return carpetCost + laborCost;
}

double calcDiscountAmount(double installedPrice, double discount)
{
    return installedPrice * (discount / 100);
}

double calcSubtotal(double installedPrice, double discountAmount)
{
    return installedPrice - discountAmount;
}

double calcTax(double subtotal)
{
    return subtotal * TAX_RATE;
}

double calcTotal(double subtotal, double tax)
{
    return subtotal + tax;
}

void printMeasurements(double length, double width, double area)
{
    printf("\t\tMEASUREMENT\n");
    printf("Length\t\t\t\t\t%.2lf ft\n", length);
    printf("Width\t\t\t\t\t%.2lf ft\n", width);
    printf("Area\t\t\t\t\t%.2lf square ft\n\n", area);
}

void printCharges(double length, double width, double costPerSqFt, double laborCost, double installedPrice, double customerDiscount, double discountAmount, double subtotal, double total)
{
    printf("\t\tCHARGES\n");
    printf("DESCRIPTION\tCOST/SQ. FT.\t\tCHARGE\n");
    printf("----------\t-----------\t   -----------\n");
    printf("Carpet\t\t\t%.2lf\t\t$%.2lf\n", costPerSqFt, calcCarpetCost(length, width, costPerSqFt));
    printf("Labor\t\t\t%.2lf\t\t$%.2lf\n", LABOR_COST, laborCost);
    printf("\t\t\t\t   -----------\n");
    printf("INSTALLED PRICE\t\t\t\t$%.2lf\n", installedPrice);
    printf("Discount\t\t%.2lf%%\t\t$%.2lf\n", customerDiscount, discountAmount);
    printf("\t\t\t\t   -----------\n");
    printf("SUBTOTAL\t\t\t\t$%.2lf\n", subtotal);
    printf("Tax\t\t\t\t\t$%.2lf\n", calcTax(subtotal));
    printf("TOTAL\t\t\t\t\t$%.2lf\n\n", total);
}
