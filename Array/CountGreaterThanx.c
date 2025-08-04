#include<stdio.h>
int count(int arr[],int n,int x){
    int c = 0;
    for(int i=0; i<n ; i++){
        if(arr[i]>x) c++;
    }
    return c;
}
int main(){
    int arr[5]= {1,2,3,4,5};
    int x;
    printf("enter the number to which which we have check our elements : ");
    scanf("%d",&x);
    
    int num = count(arr,5,x);
    
    printf("%d elements are greater then %d in the given array ",num,x);
    return 0;
}