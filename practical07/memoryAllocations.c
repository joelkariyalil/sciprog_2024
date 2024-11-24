#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for an array of integers
int* allocateArray(int size) {
    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Unable to Allocate Memory for Array\n");
        exit(1);
    }
    return array;
}

// Function to fill the array with ones
void fillWithOnes(int* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 1; 
    }
}

// print the array - function
void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Function to free the allocated memory
void freeMemory(int* array) {
    free(array); 
}

int main() {
    
    // Variable Declarations
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* array = allocateArray(size);

    fillWithOnes(array, size);

    printf("Array elements: ");
    printArray(array, size);

    freeMemory(array);

    return 0;
}
