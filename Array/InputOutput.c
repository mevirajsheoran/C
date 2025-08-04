#include<stdio.h>

int main(){

    int arr[5];
    printf("taking input for arr\n");
    for(int j =0;j<5;j++){
        printf("enter element number %d : ",j+1);
        scanf("%d",&arr[j]);  
    } 

    printf("\nprinting complete array\n");
    for(int i = 0; i<5;i++) printf(" %d ",arr[i]);

     printf("\nprinting complete array in reverse\n");
    for(int i = 4; i>=0;i--) printf(" %d ",arr[i]);
    return 0;
}