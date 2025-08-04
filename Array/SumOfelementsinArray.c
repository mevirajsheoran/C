#include<stdio.h>

int main(){

    int marks[10]= {98,78,67,45,32,12,45,90,15,28};
    int sum = 0;
    for(int i = 0; i<10;i++ ){
        sum+=marks[i];
    }
    printf("the sum of the elements in array is %d",sum);
    return 0;
}