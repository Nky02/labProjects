#include <stdio.h>

int main()
{
    // Given new values
    int x = 3;
    int y = 0;
    int z = -4;

    // Evaluate the expressions
    int result_a = x && y || z;   // a
    int result_b = x || y && z;   // b
    int result_c = (x && y) || z; // c
    int result_d = (x || y) && z; // d
    int result_e = (x && z) || y; // e

    // Output the results
    printf("a. x && y || z = %d\n", result_a);
    printf("b. x || y && z = %d\n", result_b);
    printf("c. (x && y) || z = %d\n", result_c);
    printf("d. (x || y) && z = %d\n", result_d);
    printf("e. (x && z) || y = %d\n", result_e);

    return 0;
}
