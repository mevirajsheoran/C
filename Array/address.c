#include<stdio.h>

int main(){

    int marks[10]= {98,78,67,45,32,12,45,90,15,28};
    for(int i = 0; i<10;i++ ){
        printf("address of %d is %d.\n",marks[i],&marks[i]);
    }
    return 0;
}