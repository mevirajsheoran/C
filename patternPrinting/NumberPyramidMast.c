#include <stdio.h>
int main(){
    int r;
    printf("enter number of rows :\n");
    scanf("%d",&r);
    int spaces = r-1;
    int  num = 1;
    for(int i =1;i<=r;i++){
        
        for(int j=1;j<=spaces;j++){
           printf(" "); 
        } spaces=spaces-1;
        int a = 1;
        for(int k=1;k<=num;k++){
            printf("%d",a);
            a++;
        }num = num+1;
        int b = i-1;
        for(int l=1;l<i;l++){
            printf("%d",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}