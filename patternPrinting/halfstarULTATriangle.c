#include <stdio.h>
int main(){
        
    int r;
    printf("enter number of rows :\n");
    scanf("%d",&r);

    for(int i =1;i<=r;i++){
        for( int j = r;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}