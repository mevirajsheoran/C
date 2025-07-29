#include <stdio.h>
int main(){
        
    int r;
    printf("enter number of rows  :");
    scanf("%d",&r);

    for(int i =1;i<=r;i++){
            if(i%2==0){
                int d =65;
                for(int j=1;j<=i;j++){
                    char ch = (char)d;
                    printf("%c",ch);
                    d++;
                }
            }
            else{
                for(int j=1;j<=i;j++){
                    printf("%d",j);
                }
            }
        printf("\n");
    }
    return 0;
}