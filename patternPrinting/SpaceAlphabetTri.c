#include <stdio.h>
int main(){
        
    int r;
    printf("enter number of rows :\n");
    scanf("%d",&r);
    

    for(int i =1;i<=r;i++){
        char ch = (char)65;
        for(int j=1;j<=r-i;j++) printf(" ");
        for(int k=1;k<=i;k++) {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}