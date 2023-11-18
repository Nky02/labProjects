/*This program creates customers' bill for a carpet company
Written by: Nicky Shane Estrada
Date: November 12, 2023*/

#include <stdio.h>
#define LABOR_COST  0.35
#define TAX_RATE 0.085

void printMeasurement(); // MEASUREMENT
void getLength(double a);
void getWidth(double b);
void area(double a, double b);
void printCharges(); // CHARGES
void printDescriptionCostCharge();
void brokenLines1();
void printCarpet(double a, double b);
void printlabor(double a, double b);
void brokenLines2();
void printInsPrice(double a, double b);
void printDiscount(double a, double b);
void brokenLines3();
void printSubTotal(double a, double b);
void printTax(double a, double b);
void printTotal(double a, double b);
void printBill(double length, double width, double area, double carpetCost, double laborCost, double installedPrice, double discount, double subtotal, double total,);

double calcArea(double a, double b);
double calCarpetcCostPerSqrft(double a, double b);
double calcLaborCharge(double a, double b);
double calcInstalledprice(double a, double b);
double calcPctDiscount(double a, double b);
double calcsubTotal(double a, double b);
double calcTax(double a, double b);
double calcTotal(double a, double b);

int main()
{
    double length, width, customerDisc, costPrSqrft;

    printf("Length of the room(feet)?");
    scanf("%lf", &length);

    printf("Width ofthe room(feet)?");
    scanf("%lf", &width);

    print("Customer discount (percent)?");
    scanf("%lf", &customerDisc);

    printf("Cost per square foot?");
    scanf("%lf", &costPrSqrft);

    // function calls

    printMeasurement(); // MEASUREMENT
    getlength(length);
    getwidth(width);
    area(length, width);
    printCharges(); // CHARGES
    printDescriptionCostCharge();
    brokenLines1();
    printCarpet(length, width);
    printlabor(length, width);
    brokenLines2();
    printInsPrice(length, width);
    printDiscount(length, width);
    brokenLines3();
    printSubTotal(length, width);
    printTax(length, width);
    printTotal(length, width);

    return 0;
}

void printMeasurement()
{
    printf("\t\tMEASUREMENT\n");
}

void getLength(double a)
{
    int convert = (int)a;
    printf("Length\t\t\t\t\t%d ft\n", convert);
}


