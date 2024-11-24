#include<stdio.h>
#include<math.h>

float tanCalc(int N){

    float a = 0;
    float b = 60;

    float bRad = (M_PI * b) / 180;

    float totalSum = tan(a) + tan(bRad);

    printf("\n\nSum (Before Loop):\t\t%f\n", totalSum);

    for(int i=5; i<60; i=i+5)
        totalSum += 2*tan(i*M_PI/180);

    printf("Sum (After Loop):\t\t%f\n", totalSum);

    totalSum *= ((bRad - a)/(2 * N));
    printf("Sum (Final Value):\t\t%f", totalSum);

    float absDiff = fabs(totalSum - logf(2));
    float relDiff = fabs(1 - (totalSum/logf(2)));

    printf("\nAbsolute Difference:\t\t%f", absDiff);
    printf("\nRelative Difference:\t\t%f\n\n", relDiff);

    return totalSum;
}

int main() {

    // Declare Variables
    float arr[12];

    for(int i=0;i<12;i++){
    arr[i] = 2*tan(((i+1)*5)*M_PI/180);
    }

    // Using Functions to calculate the tan values.
    printf("%f", tanCalc(10));
    printf("%f", tanCalc(20));
    printf("%f", tanCalc(30));
    printf("%f", tanCalc(40));
    
    return 0;
}
