#include <stdio.h>

void nextFibonacci(int *current,int *previous){
    int next = *current+*previous;
    *previous = *current;
    *current = next;
}

int main(){

    // could use dynamic programming, and make it a lot faster!
    
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int previous = 0;
    int current = 1;
    
    if (n >= 1) printf("%d ",previous);
    if (n >= 2) printf("%d ",current);

    for (int i = 2; i < n; i++){
        nextFibonacci(&current,&previous);
        printf("%d ",current);
    }
    
    printf("\n");
    return 0;
}