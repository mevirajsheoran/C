#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 3 == 0) {
        if (a % 5 == 0) {
            printf("%d is divisible by both 3 and 5.\n", a);
        } else {
            printf("%d is divisible by 3 but not by 5.\n", a);
        }
    } else {
        printf("%d is not divisible by 3.\n", a);
    }
    return 0;
}
