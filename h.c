#include <stdio.h>
#include <math.h>

int main() {
    // Define two floating-point numbers
    double a = 1.0 / 3.0;
    double b = 1.0 / 3.0;

    // Compute the sum
    double sum = a + b;

    // Display results
    printf("a: %.16f\n", a);
    printf("b: %.16f\n", b);
    printf("sum: %.16f\n", sum);
    printf("Expected sum: %.16f\n", (1.0 / 3.0) * 2);

    // Print the difference between expected and computed sum
    double expected_sum = (1.0 / 3.0) * 2;
    printf("Difference: %.16f\n", sum - expected_sum);

    return 0;
}
