#include <stdio.h>
int main(){
        
    int r;
    printf("enter number of rows :\n");
    scanf("%d",&r);
    
    int a = r;

    for(int i =1;i<=r;i++){
        for( int j=1;j<=a;j++){
            printf("%d",j);
        }
        a--;
        printf("\n");
    }
    return 0;
}