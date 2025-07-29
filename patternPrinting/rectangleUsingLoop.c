#include <stdio.h>
int main(){
        
    int r,c;
    printf("enter number of rows and columns :\n");
    scanf("%d %d",&r,&c);

    for(int i =1;i<=r;i++){
        for( int j = 1;j<=c;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}