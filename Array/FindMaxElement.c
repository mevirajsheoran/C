#include<stdio.h>

int main(){

    int arr[10]= {1,2,3,4,5,6,7,8,9,2};
    int max = arr[0]; 
    for(int i = 1; i<10;i++ ){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("the maximum value in this array is %d ",max);
    return 0;
}