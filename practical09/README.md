# Practical 9

----

## Description

This program reads a matrix from a file, dynamically allocates memory for it, and checks if it forms a magic square, freeing memory after processing. It also handles errors in file reading and memory allocation.

----
## Output

[sp86@sciprog practical09]$ gcc -o output.exe mainStub.c  -lm; ./output.exe
Enter file name: magicSquare.txt
No. lines, 3
The matrix is a magic square.
[sp86@sciprog practical09]$ gcc -o output.exe mainStub.c  -lm; ./output.exe
Enter file name: notMagicSquare.txt
No. lines, 2
Row 1 does not sum to 5 (row sum = 9).
The matrix is NOT a magic square.
[sp86@sciprog practical09]$

