#include<stdio.h>

int main(){

    int marks[10]= {98,78,67,45,32,12,45,90,15,28};
    for(int i = 0; i<10;i++ ){
        if(marks[i]<33){
            printf("student with roll no %d is fail\n ",i);
        }
    }
    return 0;
}