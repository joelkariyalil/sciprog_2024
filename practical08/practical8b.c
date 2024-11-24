#include <stdio.h>
#include <stdlib.h>

// Function to find GCD using a recursive approach
int findGCDRecursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCDRecursive(b, a % b);
    }
}

int main() {
    int a, b;

    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);

    if (a<0 || b<0){
        printf("Enter Positive Numbers");
        exit(1);
    }

    int result = findGCDRecursive(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, result);

    return 0;
}