#include <stdio.h>

void display(int arr[],int size){
    for(int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void insertion(int arr[], int size){
    int i,j,temp;
    for(i = 1; i<size ; i++){
        temp=arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp){
            //right shift
            arr[j+1] = arr[j];
            j--;
        }arr[j+1] = temp;
        printf("Pass %d:==>",i);
        display(arr,size);
        printf("\n");

    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,32,9};
    int size = 9;

    printf("original array : ");
    display(arr,size);

    insertion(arr,size);

    printf("sorted array : ");
    display(arr,size);

    return 0;

}