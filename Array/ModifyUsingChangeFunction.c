#include<stdio.h>
void change(int arr[],int n){
    for(int i=0; i<n ; i++){
        if(i%2==0) arr[i] = arr[i]+10;   
        else arr[i] = arr[i]*2;
    }
}
void displayarray(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5]= {1,2,3,4,5};
    printf("the given array is : \n");
    displayarray(arr,5);
    change(arr,5);
    printf("the modfied array is : \n");
    displayarray(arr,5);
    return 0;
}