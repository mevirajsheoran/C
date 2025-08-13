#include <stdio.h>

void search(int a[], int n, int m) {
    int i, flag = 0;
    
    for (i = 0; i < n; i++) {
        if (a[i] == m) {
            flag = 1;
            printf("Element %d found at positions: %d \n", m,i+1 );
        }
    }
    if (flag == 0) {
        printf("Sorry! Element %d not found\n", m);
    } 
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    search(arr, size, target);

    return 0;
}
