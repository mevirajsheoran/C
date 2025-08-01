  #include <stdio.h>

int stair(int n){
    if(n==1||n==2) return n;
    return stair(n-1)+stair(n-2);
}


int main() {
   
   int n;
   printf("enter the number stairs ");
   scanf("%d",&n);
   
   printf("Number of ways in which %d stairs can be climb is %d",n,stair(n));
    return 0;
}
