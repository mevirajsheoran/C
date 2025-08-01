#include <stdio.h>

int stair(int n){
    if(n == 0 || n == 1) return 1; // Base case: There is only one way to climb 0 or 1 step.
    if(n == 2) return 2; // Base case: There are two ways to climb 2 steps (1+1 or 2).
    return stair(n-1) + stair(n-2) + stair(n-3); // Recursive call for n steps by taking 1, 2, or 3 steps at a time.
}

int main() {
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
   
    printf("Number of ways to climb %d stairs: %d", n, stair(n));
    return 0;
}
