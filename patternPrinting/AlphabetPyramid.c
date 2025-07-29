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
        int a = 65;
        for(int k=1;k<=num;k++){
            char ch = (char)a;
            printf("%c",ch);
            a++;
        }num = num+2;
        printf("\n");
    }
    return 0;
}