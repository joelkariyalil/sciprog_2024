#include <stdio.h>
#include <stdlib.h>

// Calculate the factorial

double factorial(int n) {
    double res = 1.0;
    if (n == 0 || n == 1) {
        return 1.0;
    }
    res = 1.0;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

// Calculate e^x for x = 1
double estimateE(int order) {

    // array memory allocation
    double *terms = (double*) malloc(order * sizeof(double));
    if (terms == NULL) {
        printf("Failed to allocated memory\n");
        exit(1);
    }

    terms[0] = 1.0; // f(x) starts with 1 for x=1

    // Calculation of Taylor series terms.
    double sum = terms[0];
    for (int i = 1; i < order; i++) {
        terms[i] = 1.0 / factorial(i);
        sum += terms[i];
    }

    free(terms);
    return sum;
}

int main() {

    // variable declarations
    int order;
    printf("\n\nOrder of the Polynomial: ");
    scanf("%d", &order);

    // Adding some spacing
    printf("\n\n");

    // Iterating from 1st to 15th order
    for (int i = 1; i <= order && i <= 15; i++) {
        double estimate = estimateE(i);
        printf("Order %d: Estimate of e = %.10f\n", i, estimate);
    }

    printf("\n\n");

}