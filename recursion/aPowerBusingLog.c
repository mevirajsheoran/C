#include <stdio.h>

int powerlog(int a, int b) {
    if (b == 0) return 1;  // Base case for any number raised to power 0
    if (b == 1) return a;  // Base case for any number raised to power 1

    int x = powerlog(a, b / 2);
    if (b % 2 == 0) return x * x;
    else return a * x * x;
    
}

int main() {
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    printf("%d raised to %d is %d\n", a, b, powerlog(a, b));

    return 0;
}
