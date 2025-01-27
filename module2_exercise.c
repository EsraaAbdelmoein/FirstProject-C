#include <stdio.h>

int main() {
    // Declare and initialize variables
    float radius = 5.25; // Radius of the circle
    double pi = 3.141592653589793; // Constant Pi

    // Calculate the circumference
    double circumference = 2 * pi * radius;

    // Type conversion: Convert circumference to an integer
    int circumference_int = (int)circumference;

    // Declare Planck's constant and assign its value
    double plancks_constant = 6.62607015e-34;

    // Print formatted outputs
    printf("The radius of the circle: %.2f\n", radius);
    printf("The floating-point circumference: %.3f\n", circumference);
    printf("The integer-converted circumference: %d\n", circumference_int);
    printf("Planck's constant in scientific notation: %e\n", plancks_constant);

    return 0;
}
