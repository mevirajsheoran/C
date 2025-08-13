#include <stdio.h>

void display(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void selection(int arr[], int size) {
    int i, j, indexofmin, temp;
    for(i = 0; i < size - 1; i++) {
        indexofmin = i;
        for(j = i + 1; j < size; j++) {
            if(arr[indexofmin] > arr[j]) {
                indexofmin = j; 
            }
        }
        
        temp = arr[i];
        arr[i] = arr[indexofmin];
        arr[indexofmin] = temp;

        
        printf("Pass %d: = ", i + 1);
        display(arr, size);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 32, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    display(arr, size);

    selection(arr, size);

    printf("Sorted array: ");
    display(arr, size);

    return 0;
}
