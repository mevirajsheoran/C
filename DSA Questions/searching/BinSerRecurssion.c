#include <stdio.h>

int binarysearch(int a[], int beg, int end, int m) {
    if (beg <= end) {
        int mid = (beg + end) / 2;
        
        if (a[mid] == m) {
            return mid;
        } else if (a[mid] > m) {
            return binarysearch(a, beg, mid - 1, m);
        } else {
            return binarysearch(a, mid + 1, end, m);
        }
    }
    return -1;
}

int main() {
    int a[] = {10, 20, 30, 40, 50, 60,60, 70, 80, 90, 100, 110};
    int n = sizeof(a) / sizeof(a[0]);
      
    int b = binarysearch(a, 0, n - 1, m);
    if (b == -1) {
        printf("\nSorry! Element not found\n");
    } else {
        printf("\nElement found at position %d\n", b + 1);
    }

    return 0;
}
