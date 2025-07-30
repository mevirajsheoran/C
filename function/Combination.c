#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact= fact*i;
    }
    return fact;
}
int combi(int n,int r){
     int nFact = factorial(n);
    int rFact = factorial(r);
    int nMinusRFact = factorial(n - r);
    
    int ncr = nFact/(rFact*nMinusRFact);
    printf("Combination of %dC%d is %d\n", n, r, ncr);
    return 0;
}
int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter the value of r: ");
    scanf("%d", &r);
    
    if (n < r) {
        printf("Invalid input: n should be greater than or equal to r.\n");
        return 1; 
    }
    combi(n,r);
     
    return 0;
}