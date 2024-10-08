#include <stdio.h>
#include <math.h>
//round-off error
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


//truncate error


#include <stdio.h>

// Function to compute factorial
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to compute e using Taylor series expansion
double compute_e(int terms) {
    double e = 1.0; // Start with the first term of the series
    for (int i = 1; i < terms; i++) {
        e += 1.0 / factorial(i);
    }
    return e;
}

int main() {
    // Number of terms in Taylor series
    int terms = 10;
    double e_approx = compute_e(terms);
    double e_exact = 2.718281828459045; // Known value of e

    // Display results
    printf("Approximation of e using %d terms: %.15f\n", terms, e_approx);
    printf("Exact value of e: %.15f\n", e_exact);
    printf("Truncation error: %.15f\n", e_approx - e_exact);

    return 0;
}
