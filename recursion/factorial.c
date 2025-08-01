#include <stdio.h>

int factorial(int n){
    if(n==0 || n==1) return 1;   // base case
    return n*factorial(n-1);
}

int main() {
   
   int n;
   printf("enter a number ");
   scanf("%d",&n);
   
   int fact = factorial(n);
   printf("the factorial of %d is %d",n,fact);
    return 0;
}