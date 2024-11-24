# Practical 02
----

## Description

### Conversion.c

The code converts the integer inum (33554431) into its binary representation, calculates the number of binary digits using logarithms, and prints the integer, its float conversion, and binary string.

### Sum.c

Calculates the harmonic series, and prints out the difference in between the 2 iterations highlighting the errors that have risen due to division errors.

----

## Output

[sp86@sciprog practical02]$ gcc -o Conversion.exe Conversion.c -lm; ./Conversion.exe
The number of digits is 25
inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111

[sp86@sciprog practical02]$ gcc -o Sum.exe Sum.c; ./Sum.exe
 Sum1=7.485478
 Sum2=7.485472
 Difference between the two is -0.000007

[sp86@sciprog practical02]$
