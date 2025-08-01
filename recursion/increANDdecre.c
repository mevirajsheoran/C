#include <stdio.h>

void increasinganddecreasing(int n){
    if (n==0) return;
    printf("%d\n",n);
    increasinganddecreasing(n-1);
    printf("%d\n",n);
    
    return;
}
int main() {
   
   int n;
   printf("enter a number ");
   scanf("%d",&n);
   
    increasinganddecreasing(n);
    return 0;
}
