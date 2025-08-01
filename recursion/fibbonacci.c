#include <stdio.h>

int fibbo(int n){
    if( n==1 || n ==2) return 1;   // base case
    return fibbo(n-1)+fibbo(n-2);
}

int main() {
   
   int n;
   printf("enter a number ");
   scanf("%d",&n);
   
   printf("the %d fibbonacci number is %d",n,fibbo(n));
    return 0;
}
