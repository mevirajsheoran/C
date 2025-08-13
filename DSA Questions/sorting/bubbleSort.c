#include <stdio.h>

void display(int arr[],int size){
    for(int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void bubble(int arr[], int size){
    int i,j,temp;
    for(i = 0; i<(size-1); i++){
        for(j = 0; j<size-(i+1); j++){
            if(arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }
        }
        printf("Pass %d:= ",i+1);
        display(arr,size);
        printf("\n");

    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,32,9};
    int size = 9;

    printf("original array : ");
    display(arr,size);

    bubble(arr,size);

    printf("sorted array : ");
    display(arr,size);

    return 0;

}