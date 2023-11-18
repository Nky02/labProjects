/*ESTRADA 11/8/2023*/

#include <stdio.h>

void printMyName(char name[])
{
    printf("*********************************\n");
    printf("*\t\t\t\t*\n");
    printf("*\t%s\t*\n", name);
    printf("*\t\t\t\t*\n");
    printf("*********************************\n");
}
int main(void)
{
    char name[] = "Nicky Shane EStrada";

    printMyName(name);
    return 0;
}