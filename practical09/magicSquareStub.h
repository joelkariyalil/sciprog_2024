#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value

bool isMagicSquare(int **square, const int n) {

    // variable declarations

    int mainDiagonal = 0;
    int secondaryDiagonal = 0;


    // Eliminate the case where 'n' is negative or zero
    if (n <= 0) {
        return 0;
    }

    int M = (n * (n * n + 1)) / 2;

    int i, j;
    // TODO: Checking that every row and column add up to M

    for (i = 0; i < n; i++) {
        int rowSum = 0;
        for (j = 0; j < n; j++) {
            rowSum += square[i][j];
            if (i == j) {
                mainDiagonal += square[i][j];
            }
            if (i + j == n - 1) {
                secondaryDiagonal += square[i][j];
            }
        }
        if (rowSum != M) {
            printf("Row %d does not sum to %d (row sum = %d).\n", i + 1, M, rowSum);
            return 0;
        }
    }

    // Perform column sum calculation and verification
    for (j = 0; j < n; j++) {
        int colSum = 0;
        for (i = 0; i < n; i++) {
            colSum += square[i][j];
        }
        if (colSum != M) {
            printf("Column %d does not sum to %d (column sum = %d).\n", j + 1, M, colSum);
            return 0;
        }
    }

    // TODO: Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square

    if (mainDiagonal != M || secondaryDiagonal != M) {
        printf("Diagonals do not sum to %d (Diagonal-Main) = %d, Diagonal-Secondary = %d).\n", M, mainDiagonal, secondaryDiagonal);
        return 0;
    }


    return true;
}
