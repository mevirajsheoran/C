#include<stdio.h>

int main(){

    int pro[10]= {1,2,3,4,5,6,7,8,9,2};
    int product = 1;
    for(int i = 0; i<10;i++ ){
        product = product*pro[i];
    }
    printf("the product of the elements in array is %d",product);
    return 0;
}