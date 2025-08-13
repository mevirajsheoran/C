#include<stdio.h>

void binser(int arr[],int n, int data){
    int lb = 0, ub = n-1;
    int i = 0, flag = 0;
    while(lb<=ub){
        int mid = (lb+ub)/2;
        if(data == arr[mid]){
            printf("%d is present in array at position %d",data,arr[mid]+1);
            flag = 1;
            break;
        }if(data<arr[mid]){
            ub = arr[mid]-1;
        }if(data > arr[arr[mid]]){
            lb = arr[mid]+1;
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int data;
    printf("enter the data you want to search in arr : ");
    scanf("%d", &data);

    binser(arr,size,data);
}