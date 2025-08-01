#include <stdio.h>

int sum(int n){
    if(n==0 || n==1) return 1;   // base case
    int result = n+sum(n-1);
    return result;
}

int main() {
   
   int n;
   printf("enter a number ");
   scanf("%d",&n);
   
   int addition = sum(n);
   printf("the sum of first %d numbers is %d",n,addition);
    return 0;
}
