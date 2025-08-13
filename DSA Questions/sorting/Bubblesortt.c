#include<stdio.h>

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d  ",arr[i]);
    }printf("\n");
}

void bubblesort(int arr[], int n){
    int flag;
    for(int i = 0; i<n-1; i++){
        flag = 0;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        printf("pass %d :",i+1);
        display(arr,n);
        if(flag == 0) break;
    }
}

int main(){
    int arr[] = {4,6,3,6,7,8,9,4,3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("array before sorting : \n");
    display(arr,n);

    bubblesort(arr,n);
    printf("array AFTER sorting :\n ");
    display(arr,n);
}