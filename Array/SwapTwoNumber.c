#include<stdio.h>
void fun(int arr[]){
    int temp = arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
}

int main(){
    int arr[5]= {1,2,3,4,5};
    printf("element at 0 is %d and element at 1 is %d \n",arr[0],arr[1]);
    fun(arr);
    printf("element at 0 is %d and element at 1 is %d \n",arr[0],arr[1]);
    return 0;
}