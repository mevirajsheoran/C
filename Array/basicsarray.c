#include<stdio.h>

int main(){

    int arr[5];
    printf("taking input for arr\n");
    for(int j =0;j<5;j++) scanf("%d \n",&arr[j]);

    printf("\nprinting complete array\n");
    for(int i = 0; i<5;i++) printf(" %d ",arr[i]);
    return 0;
}