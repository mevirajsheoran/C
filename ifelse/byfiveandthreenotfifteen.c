#include<stdio.h>

int main(){

    int a;
    printf("enter the integer");
    scanf("%d", &a);

    if (a%3==0 || a%5==0 ){
        if(a%15==0){
            printf("%d is not our desired number",a);
        }
        else{
            printf("%d is our desired number",a);
        }
    }
    else{
        printf("%d is not our desired number",a);
    }
    return 0;
}