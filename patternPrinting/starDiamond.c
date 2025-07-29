#include <stdio.h>
int main(){
        
    int r;
    printf("enter number of rows :\n");
    scanf("%d",&r);
    int space = r/2;
    int star = 1;
    int ml = (r/2)+1;
    for(int i =1;i<=r;i++){
        for(int j=1;j<=space;j++){
           printf(" "); 
        } 
        for(int k=1;k<=star;k++){
            printf("*");
        }
        if(i<ml){
            space--;
            star=star+2;
        }else{
            space++;
            star=star-2;
        }
        printf("\n");
    }
    return 0;
}