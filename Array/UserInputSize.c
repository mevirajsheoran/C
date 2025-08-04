#include<stdio.h>

int main(){
    int n;
    printf("enter the size of array : \n");
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0; i<n;i++){
        printf("enter element at index : %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nthe array is :\n");
    for(int j =0; j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}