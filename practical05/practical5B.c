#include <stdio.h>
#include <math.h>

// function to calculate the log functions.
double arctanhmaclaurin(double x, double delta){
    double sum = 0.0;
    double val;
    double term = x;
    int n = 0;

   do {
        val = 2*n +1;
        term = pow(x, val) / val;
        sum += term;
        n++;
    }  while (fabs(term)>delta);

    return sum;
}

double arctanhlog(double x){
    return 0.5*(log(1+x)-log(1-x));
}

int main(){

    // variable declarations
    double delta;
    printf("Enter a real positive number(delta): ");
    scanf("%lf",&delta);

    double x;

    // looping through the items.
    for (x =-0.9; x<=0.9; x+=0.01){
        
        double maclaurinresult = arctanhmaclaurin(x, delta);
        double logresult = arctanhlog(x);

        printf("\nx = %.2lf: \n Maclaurin approximation = %.10lf \n Logarithmic calculation = %.10lf\n", x, maclaurinresult, logresult);
    }

    return 0;
}