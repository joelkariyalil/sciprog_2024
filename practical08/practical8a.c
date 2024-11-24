#include <stdio.h>
#include <stdlib.h>

// Function to find GCD using an iterative approach
int findGCDIterative(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
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

    int result = findGCDIterative(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, result);

    return 0;
}