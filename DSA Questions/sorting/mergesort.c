#include <stdio.h>
int m=1;
void merge(int array[], int left, int mid, int right, int n) {
    int b[100];
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (array[i] <= array[j]) {
            b[k] = array[i];
            i++;
        } else {
            b[k] = array[j];
            j++;
        }
        k++;
    }    while (i <= mid) {
        b[k] = array[i];
        i++;
        k++;
    }
    while (j <= right) {
        b[k] = array[j];
        j++;
        k++;
    }
    for (k = left; k <= right; k++) {
        array[k] = b[k];
    }
    printf("Pass %d:- ", m);
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    m++;
    printf("\n");
}

void mergeSort(int array[], int left, int right, int n) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(array, left, mid, n);
        mergeSort(array, mid + 1, right, n);
        merge(array, left, mid, right, n);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {6, 5, 4, 3, 2, 1};
    int array_size = sizeof(array) / sizeof(array[0]);
    printf("Original array: ");
    printArray(array, array_size);
    mergeSort(array, 0, array_size - 1, array_size);
    printf("Sorted array: ");
    printArray(array, array_size);
    return 0;
}
