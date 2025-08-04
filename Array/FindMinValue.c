#include<stdio.h>

int main(){

    int arr[10]= {1,2,3,4,5,6,7,8,9,2};
    int min = arr[0]; 
    for(int i = 1; i<10;i++ ){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("the minimum value in this array is %d ",min);
    return 0;
}